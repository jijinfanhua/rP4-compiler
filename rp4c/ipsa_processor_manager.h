#pragma once

#include "ipsa_stage_manager.h"
#include "ipsa_header_manager.h"
#include "ipsa_level_manager.h"
#include "ipsa_action_manager.h"
#include "ipsa_table_manager.h"

/*----------------------------------------------------------------
    does not aggregate the stages
    each stage occupy a different processor

    first, if a stage is empty -> only 1 (action -> next_stage)
        1. add its action to all the actions points to it
        2. remove the stage and the action / table
*/

// generate the processors
class IpsaProcessorManager {
public:
    IpsaStageManager* stage_manager;
    IpsaHeaderManager* header_manager;
    IpsaLevelManager* level_manager;
    IpsaActionManager* action_manager;
    IpsaTableManager* table_manager;
    IpsaProcessorManager(
        IpsaStageManager* _stage_manager,
        IpsaHeaderManager* _header_manager,
        IpsaLevelManager* _level_manager,
        IpsaActionManager* _action_manager,
        IpsaTableManager* _table_manager
    ):
        stage_manager(_stage_manager),
        header_manager(_header_manager),
        level_manager(_level_manager),
        action_manager(_action_manager),
        table_manager(_table_manager) 
        {}
    void initializeStages();
};

void IpsaProcessorManager::initializeStages() {
    // action to proc table
    for (auto& stage : stage_manager->logical_stages) {
        auto& exec_entries = stage.def->executor.entries;
        for (auto& entry : exec_entries) {
            auto action = action_manager->lookup(entry.action_name);
            int action_id = action == nullptr ? 0 : action->id;
            auto processor = stage_manager->lookup(entry.stage_name);
            int processor_id = processor == nullptr ? -1 : processor->stage_id;
            stage.action_proc.push_back({action_id, processor_id});
        }
    }
    // remove empty stages
    for (auto& stage : stage_manager->logical_stages) {
        if (auto virtual_action = stage.def->get_virtual_action(); virtual_action != nullptr) {
            // replace stage with virtual_action
            auto action = action_manager->lookup(virtual_action->action_name);
            if (action->parameter_num > 0) {
                continue; // cannot be removed
            }
            int next_stage_id = stage_manager->lookup(virtual_action->stage_name)->stage_id;
            bool conflict_flag = false;
            for (auto& prev_stage : stage_manager->logical_stages) {
                if (!prev_stage.removed) {
                    for (int i = 0; i < prev_stage.action_proc.size(); i++) {
                        if (prev_stage.action_proc[i].second == stage.stage_id) {
                            int prev_action_id = prev_stage.action_proc[i].first;
                            if (action_manager->concatAction(prev_action_id, action)) {
                                prev_stage.action_proc[i] = {
                                    prev_action_id,
                                    next_stage_id
                                };
                            } else {
                                conflict_flag = true;
                            }
                        }
                    }
                }
            }
            if (!conflict_flag) {
                stage.removed = true;
            }
        }
    }
    // reorder the stages
    std::map<int, int> reorder_map;
    int global_stage_id = 0;
    for (auto& stage : stage_manager->logical_stages) {
        if (!stage.removed) {
            reorder_map.insert({{stage.stage_id, global_stage_id++}});
        } else {
            reorder_map.insert({{stage.stage_id, -1}});
        }
    }
    for (auto& stage : stage_manager->logical_stages) {
        stage.stage_id = reorder_map[stage.stage_id];
        for (int i = 0; i < stage.action_proc.size(); i++) {
            stage.action_proc[i] = {
                stage.action_proc[i].first,
                reorder_map[stage.action_proc[i].second]
            };
        }
    }
}
