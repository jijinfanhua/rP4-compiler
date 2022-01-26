#pragma once

#include "ipsa_module.h"
#include "rp4_ast.h"

class IpsaAction : public IpsaModule {
public:
    int action_id;
    const Rp4ActionDef* def;
    IpsaAction(const Rp4ActionDef* action_def, int _action_Id): action_id(_action_Id), def(action_def) { }
    virtual std::shared_ptr<IpsaValue> toIpsaValue() const {
        return makeValue(action_id);
    }
};

class IpsaActionManager {
public:
    int global_action_id;
    const Rp4ActionDef* noaction;
    std::map<std::string, IpsaAction> actions;
    const IpsaAction* lookup(std::string name) const;
    void addAction(const Rp4ActionDef* action_def);
    IpsaActionManager() {}
    void load(const Rp4Ast* ast);
};

const IpsaAction* IpsaActionManager::lookup(std::string name) const {
    if (auto x = actions.find(name); x != std::end(actions)) {
        return &(x->second);
    } else {
        return nullptr;
    }
}

void IpsaActionManager::addAction(const Rp4ActionDef* action_def) {
    if (actions.find(action_def->name) == std::end(actions)) {
        actions[action_def->name] = IpsaAction(action_def, global_action_id++);
    }
}

void IpsaActionManager::load(const Rp4Ast* ast) {
    global_action_id = 0;
    bool noaction_included = false;
    for (auto& action_def : ast->actions_def.actions) {
        if (action_def.is_noaction) {
            noaction_included = true;
            noaction = &action_def;
        }
        addAction(&action_def);
    }
    if (!noaction_included) {
        noaction = new Rp4ActionDef("NoAction", {}, {}, true);
        addAction(noaction);  
    }
}