
在simple_switch_ecmp中，有更多的变化：

1. 因为这个P4程序是以control为单位来写函数的，所以就可能有局部变量，我们需要将局部变量提取出来作为字段。增加temp_metatdata，负责容纳局部变量；

2. 因为功能函数是以control为单位，比如control IPv4{}里面有ipv4.fib和ipv4.fib_lpm两个表，如果我们要把表写在一起的话，我觉得有必要将control名字与表名字连在一起，ipv4_fib, ipv4_fib_lpm，以防和其他冲突，比如IPv6也有这两个表。同理，action也应该按照control区分；

3. 小心NoAction以及miss的处理。我觉得还是应该在executor中添加default: 的跳转，比如执行NoAction，作为miss的处理。不应该在table中加`const default_action = dmac_miss;`类似的语句。

4. isValid()应该作为header的一个字段处理，或者说在struct headers{}中，作为字段，这个在后面的翻译中需要用到。


**rP4->JSON**

> Processor间的跳转：在软件交换机中没有processor间crossbar的概念，在一个processor内处理完成之后，设定next_proc_id，由这个变量确定下一个processor。

> 分簇：现在设定16个processor，共4个簇，总共128个SRAM(128bit\*1024)，64个TCAM(64bit\*1024)；

> 做完这个之后还需要做在线更新的内容，也就是编译cmd+rP4代码片段。

> 注意：有一种情况是，在判断后，不查表，直接执行action，应该在gateway中再加一个map，指示next_action；当proc_id==cur_proc_id并且matcher_id == -1时，直接执行next_action。

1. Parser的初始化及在线更新
    - **parser_level** (set/init_parser_level)：每个processor的parser级数；
    - **parser_entry**：每一级parser的内容；
    - **在线更新**
        - 清空原有parser内容，重新插入新的parser表项；
        - 注意：需要指定在哪个processor
        - 三个函数：ModParserEntry，ClearParser，SetParserLevel

2. Gateway的初始化及在线更新
    - **gateway内容**
        - 每个processor内的gateway由8个逻辑判断（8位的bitmap）组成，逻辑判断类型：==, !=, >, >=, <, <=
        - 比较对象为header字段、metadata字段、常数等，每个逻辑判断两个操作数；
    - **数据结构**
        - gateway内有两个map，next_proc_map, next_matcher_map，判断完成后根据bitmap查找map得到next_proc和next_matcher，如果next_proc是本proc，则执行next_matcher指定的matcher；否则，按照next_proc进行跳转；
    - **在线更新**
        - 当这个processor需要更新时，先清空gateway，再插入；
        - 三个函数：InsertRelationExp, ModResMap, ClearResMap

3. Matcher的初始化及在线更新
    - 每个processor最多支持N个matcher（在当前为16），根据gateway指定下一步执行哪个matcher；
    - **需要知道matcher的config**：matchType, procId, matcherId, keyWidth, valueWidth, keyConfig, valueConfig。其中keyWidth是匹配键的宽度，valueWidth是值的宽度，包括action_id的宽度及action参数的宽度
        - keyConfig：该matcher的所使用的SRAM/TCAM的索引数组；
        - valueConfig：该matcher的value使用的SRAM索引数组；
        - match_type：现阶段支持三种，Exact, LPM, Ternary；
    - **需要知道matcher的字段集合**：procId, matcherId, fieldInfos(array);
        - fieldInfo：hdrId, internalOffset, fdLen，共三个属性确定一个field；metadata、standard_metadata等等也视为header，赋予特定的id。比如设定最大header数量为64，那么standard_metadata的id为62，metadata的id为63.
    - **需要设定每个matcher的miss_act**：因为有16个matcher，所以组成了bitmap，如果matcher miss并且miss_act为0，不执行任何操作；如果matcher miss并且miss_act为1，执行miss_action。
    - 当更新时，需要清空之前的所有配置以及删除表内容，然后重新设定上述内容。
    - **关于miss hit**：如果gateway检测不通过，则直接通向下一个proc；通过了，如果查表hit，则执行相应的action，并跳转到该action对应的next_proc，如果miss，则执行default所指定的action，可以有可以无，但是需要在action中指定next_proc。（问题：可能相同的action对应不同的next_proc？）

4. Executor的初始化及在线更新
    - 每个executor由一至多个action组成，每个action由多个primitive组成；
    - **Primitive**：OpCode, paraNum, params
        - OpCode：ADD, SUB, SET_FIELD, COPY_FIELD
        - paraNum：每个Op有不同数量的操作数
        - params：指定操作数，其类型有field字段、常数、action的传参以及*header_id(push pop用到，暂时不考虑)*；
    - **Action**：paraNum, prims, actionParams, actionParaLens, nextProcId
        - paraNum：action传参数量
        - prims：组成action的primitive集合
        - actionParams：传参的类型
        - actionParaLens：每个传参的长度
        - nextProcId：每个action之后都跟一个下一个processor的ID
    - **在线更新**
        - 支持的action不限，可以不删除原有的action；
        - InsertAction，为其分配ID。