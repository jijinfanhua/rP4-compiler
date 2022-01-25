#pragma once

#include "ipsa_module.h"
#include "rp4_ast.h"

class IpsaStage {
public:
    int stage_id;
    const Rp4StageDef* def;
    IpsaStage(const Rp4StageDef* _def, int _stage_id):
        def(_def), stage_id(_stage_id) {}
};

class IpsaStageManager {
public:
    int global_stage_id;
    std::map<std::string, IpsaStage> logical_stages;
    IpsaStageManager(const Rp4Ast* ast);
    void add_stage(const Rp4StageDef* stage_def);
    const IpsaStage* lookup(std::string stage_name) const;
};

IpsaStageManager::IpsaStageManager(const Rp4Ast* ast) {
    global_stage_id = 0;
    for (auto& stage_def : ast->ingress_def.stage_defs) {
        add_stage(&stage_def);
    }
    for (auto& stage_def : ast->egress_def.stage_defs) {
        add_stage(&stage_def);
    }
}

void IpsaStageManager::add_stage(const Rp4StageDef* stage_def) {
    if (logical_stages.find(stage_def->name) == std::end(logical_stages)) {
        logical_stages[stage_def->name] = IpsaStage(stage_def, global_stage_id++);
    }
}

const IpsaStage* IpsaStageManager::lookup(std::string stage_name) const {
    if (auto x = logical_stages.find(stage_name); x != logical_stages.end()) {
        return &(x->second);
    } else {
        return nullptr;
    }
}