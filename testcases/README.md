
在simple_switch_ecmp中，有更多的变化：

1. 因为这个P4程序是以control为单位来写函数的，所以就可能有局部变量，我们需要将局部变量提取出来作为字段。增加temp_metatdata，负责容纳局部变量；

2. 因为功能函数是以control为单位，比如control IPv4{}里面有ipv4.fib和ipv4.fib_lpm两个表，如果我们要把表写在一起的话，我觉得有必要将control名字与表名字连在一起，ipv4_fib, ipv4_fib_lpm，以防和其他冲突，比如IPv6也有这两个表。同理，action也应该按照control区分；

3. 小心NoAction以及miss的处理。我觉得还是应该在executor中添加default: 的跳转，比如执行NoAction，作为miss的处理。不应该在table中加`const default_action = dmac_miss;`类似的语句。

4. isValid()应该作为header的一个字段处理，或者说在struct headers{}中，作为字段，这个在后面的翻译中需要用到。