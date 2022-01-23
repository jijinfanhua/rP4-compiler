#pragma once

#include <vector>
#include "rp4_field.h"
#include "rp4_key.h"
#include "rp4_treenode.h"

class Rp4Extract : public Rp4TreeNode {
public:
    Rp4Member target;
    Rp4Extract() {}
    Rp4Extract(Rp4Member _target) : target(std::move(_target)) {}
    virtual std::string toString() const {
        return "extract";
    }
};

class Rp4TransitionEntry : public Rp4TreeNode {
public:
    std::shared_ptr<Rp4Key> key = nullptr;
    std::string next;
    Rp4TransitionEntry() {}
    Rp4TransitionEntry(std::shared_ptr<Rp4Key> _key, std::string _next):
        key(std::move(_key)), next(std::move(_next)) {}
    virtual std::string toString() const {
        return "transition-entry( " + next + ")";
    }
};

class Rp4Transition : public Rp4TreeNode {
public:
    Rp4Field target;
    std::vector<Rp4TransitionEntry> entries;
    Rp4Transition() {}
    Rp4Transition(Rp4Field _target, std::vector<Rp4TransitionEntry> _entries):
        target(std::move(_target)), entries(std::move(_entries)) {}
    virtual std::string toString() const {
        return "transition";
    }
};

class Rp4StateDef : public Rp4TreeNode {
public:
    std::string name;
    Rp4Extract extract;
    Rp4Transition transition;
    Rp4StateDef() {}
    Rp4StateDef(std::string _name, Rp4Extract _extract, Rp4Transition _transition):
        name(std::move(_name)), extract(std::move(_extract)), transition(std::move(_transition)) {}
    virtual std::string toString() const {
        return "state-def(" + name + ")";
    }
    virtual std::vector<std::shared_ptr<Rp4TreeNode>> children() const {
        return {
            std::make_shared<Rp4TreeNode>(&extract), 
            std::make_shared<Rp4TreeNode>(&transition)
        };
    }
};