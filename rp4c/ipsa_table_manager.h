#pragma once

#include "ipsa_table.h"
#include "ipsa_header_manager.h"
#include "ipsa_action_manager.h"

class IpsaTableManager {
public:
    int global_table_id;
    IpsaHeaderManager* header_manager;
    IpsaActionManager* action_manager;
    std::map<std::string, IpsaTable> tables;
    IpsaTableManager(IpsaHeaderManager* _header_manager, IpsaActionManager* _action_manager): 
        header_manager(_header_manager), action_manager(_action_manager) {}
    void load(const Rp4Ast* ast);
};

// leave id and memory undefined
void IpsaTableManager::load(const Rp4Ast* ast) {
    global_table_id = 0;
    for (auto& table_def : ast->tables_def.tables) {
        IpsaTable table(global_table_id++);
        auto& key_def_entries = table_def.key_def.entries;
        // table.hit_miss = 0;
        int default_action_id = 0;
        for (auto x : table_def.optional_stmts) {
            if (x->isDefault()) {
                auto& y = std::static_pointer_cast<Rp4DefaultActionStmt>(x)->action_name;
                auto default_action = action_manager->lookup(y);
                if (default_action != nullptr) {
                    default_action_id = default_action->id;
                }
            }
        }
        // table.hit_action_id = 
        table.miss_action_id = default_action_id;
        if (key_def_entries.size() == 0) {
            table.no_table = 1; // no entries, no table
        } else {
            table.no_table = 0;
            if (key_def_entries.size() == 1) {
                auto& entry = key_def_entries[0];
                table.match_type = entry.match_type;
            } else {
                if (std::all_of(std::begin(key_def_entries), std::end(key_def_entries), [](auto& entry) {
                    return entry.match_type == MT_EXACT;
                })) {
                    table.match_type = MT_EXACT;
                } else {
                    table.match_type = MT_TERNARY;
                }
            }
            for (auto& entry : key_def_entries) {
                table.field_infos.push_back(header_manager->lookup(entry.lvalue)->toIpsaValue());
            }
        }
        tables.insert({{table_def.name, std::move(table)}});
    }
}