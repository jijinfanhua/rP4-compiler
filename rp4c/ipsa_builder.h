#pragma once

#include "ipsa_level_manager.h"
#include "ipsa_action_manager.h"
#include "ipsa_table_manager.h"
#include "ipsa_processor_manager.h"
#include "ipsa_gateway_manager.h"
#include "ipsa_distribution.h"
#include "ipsa_memory.h"

class IpsaParser : public IpsaModule {
public:
    int parser_level = 0;
    std::vector<std::shared_ptr<IpsaValue>> levels;
    IpsaParser() {}
    virtual std::shared_ptr<IpsaValue> toIpsaValue() const {
        std::map<std::string, std::shared_ptr<IpsaValue>> dst = {
            {"parser_level", makeValue(parser_level)},
            {"levels", makeValue(levels)}
        };
        return makeValue(dst);
    }
};

class IpsaProcessor : public IpsaModule {
public:
    int id;
    IpsaParser parser;
    IpsaGateway* gateway = nullptr;
    std::vector<const IpsaTable*> matcher;
    std::vector<const IpsaAction*> executor;
    IpsaProcessor(int _id): id(_id) {}
    virtual std::shared_ptr<IpsaValue> toIpsaValue() const {
        std::map<std::string, std::shared_ptr<IpsaValue>> dst = {
            {"id", makeValue(id)},
            {"parser", parser.toIpsaValue()},
            {"gateway", gateway->toIpsaValue()}
        };
        std::vector<std::shared_ptr<IpsaValue>> matcher_list;
        for (auto table : matcher) {
            matcher_list.push_back(table->toIpsaValue());
        }
        dst.insert({{"matcher", makeValue(matcher_list)}});
        std::vector<std::shared_ptr<IpsaValue>> executor_list;
        for (auto action : executor) {
            executor_list.push_back(action->toIpsaValue());
        }
        dst.insert({{"executor", makeValue(executor_list)}});
        return makeValue(dst);
    }
};

class Ipsa : public IpsaModule {
public:
    std::vector<std::shared_ptr<IpsaProcessor>> processors;
    Ipsa() {
        processors.resize(ipsa_configuration::PROC_COUNT);
    }
    virtual std::shared_ptr<IpsaValue> toIpsaValue() const {
        std::map<std::string, std::shared_ptr<IpsaValue>> dst;
        for (int i = 0; i < ipsa_configuration::PROC_COUNT; i++) {
            dst.insert({{
                "processor_" + std::to_string(i),
                processors[i] == nullptr ? nullptr : processors[i]->toIpsaValue()
            }});
        }
        return makeValue(dst);
    }
};

class IpsaBuilder {
public:
    IpsaHeaderManager header_manager;
    IpsaLevelManager level_manager;
    IpsaActionManager action_manager;
    IpsaTableManager table_manager;
    IpsaStageManager stage_manager;
    IpsaProcessorManager processor_manager;
    IpsaGatewayManager gateway_manager;
    IpsaDistribution distribution;
    IpsaMemory memory;
    Ipsa ipsa;
    IpsaBuilder():
        header_manager(), 
        level_manager(&header_manager),
        action_manager(&header_manager),
        table_manager(&header_manager, &action_manager),
        stage_manager(),
        gateway_manager(&header_manager, &stage_manager, &table_manager),
        processor_manager(
            &stage_manager,
            &header_manager,
            &level_manager, 
            &action_manager,
            &table_manager
        ),
        distribution(&processor_manager),
        memory(&processor_manager, &distribution),
        ipsa() {}
    void allocateProcessors();
    void load(const Rp4Ast* ast) {
        header_manager.load(ast);
        level_manager.load(ast);
        action_manager.load(ast);
        table_manager.load(ast);
        stage_manager.load(ast);
        processor_manager.initializeStages();
        gateway_manager.load();
        processor_manager.setupStages(&gateway_manager);
        distribution.distributeParsers();
        memory.allocateMemory();
        allocateProcessors();
    }
};

void IpsaBuilder::allocateProcessors() {
    for (int i = 0; i < ipsa_configuration::PROC_COUNT; i++) {
        ipsa.processors[i] = nullptr;
    }
    int extra_processor_id = 0;
    for (int stage_id : distribution.topo_sequence) {
        extra_processor_id = std::max(extra_processor_id, stage_id);
    }
    extra_processor_id++; // unused stage id to store parser-only stages
    for (int i = 0; i < ipsa_configuration::PROC_COUNT; i++) {
        auto& processor = ipsa.processors[i];
        if (int x = memory.physical_proc_id[i]; x >= 0) {
            processor = std::make_shared<IpsaProcessor>(x);
            auto& stage = stage_manager.logical_stages[x];
            // parser
            auto& parser_levels = distribution.distributed_levels[x];
            for (int j = 0; j < parser_levels.size(); j += ipsa_configuration::MAX_LEVEL) {
                int target_stage = x;
                if (j + ipsa_configuration::MAX_LEVEL < parser_levels.size()) { // not the last
                    for (int k = 0; k < ipsa_configuration::PROC_COUNT; k++) { // allocate a new processor
                        if (ipsa.processors[k] == nullptr && memory.physical_proc_id[k] < 0) {
                            ipsa.processors[k] = std::make_shared<IpsaProcessor>(extra_processor_id++);
                            target_stage = k;
                            break;
                        }
                    }
                    if (target_stage == x) {
                        std::cout << "error no processors can be allcoated" << std::endl;
                    }
                }
                auto& parser = ipsa.processors[target_stage]->parser;
                for (int k = 0; k < ipsa_configuration::MAX_LEVEL && j + k < parser_levels.size(); k++) {
                    int level_id = parser_levels[j + k];
                    parser.parser_level++;
                    parser.levels.push_back(
                        level_manager.levels[level_id].toIpsaValue()
                    );
                }
                if (target_stage != x) {
                    // build parser-only stage
                    int next_stage_id = x;
                    if (j + ipsa_configuration::MAX_LEVEL*2 < parser_levels.size()) {
                        next_stage_id = extra_processor_id;
                    }
                    auto gateway = ipsa.processors[target_stage]->gateway = new IpsaGateway();
                    gateway->next_table.default_entry = std::make_shared<IpsaGatewayStageEntry>(next_stage_id);
                    // no matcher and executor
                }
            }
            // gateway
            processor->gateway = &(gateway_manager.gateways[stage.gateway_id]);
            // matcher
            for (int table_id : stage.table_id) {
                processor->matcher.push_back(table_manager.lookup(table_id));
            }
            // executor 
            for (auto [action_id, _] : stage.action_proc) {
                processor->executor.push_back(action_manager.lookup(action_id));
            }
        }
    }
}