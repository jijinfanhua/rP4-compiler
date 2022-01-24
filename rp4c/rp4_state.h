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
    virtual std::vector<const Rp4TreeNode*> children() const {
        return { dynamic_cast<const Rp4TreeNode*>(&target) };
    }
};

class Rp4TransitionEntry : public Rp4TreeNode {
public:
    std::shared_ptr<Rp4Key> key = nullptr;
    std::string next;
    bool is_accept = false;
    Rp4TransitionEntry() {}
    Rp4TransitionEntry(std::shared_ptr<Rp4Key> _key, std::string _next, bool _is_accept = false):
        key(std::move(_key)), next(std::move(_next)), is_accept(_is_accept) {}
    virtual std::vector<const Rp4TreeNode*> children() const {
        return { key.get() };
    }
    virtual std::string toString() const {
        return "transition-entry( " + next + ")";
    }
};

class Rp4Transition : public Rp4TreeNode {

};

class Rp4SelectTransition : public Rp4Transition {
public:
    Rp4Field target;
    std::vector<Rp4TransitionEntry> entries;
    Rp4SelectTransition() {}
    Rp4SelectTransition(Rp4Field _target, std::vector<Rp4TransitionEntry> _entries):
        target(std::move(_target)), entries(std::move(_entries)) {}
    virtual std::string toString() const {
        return "transition-select";
    }
    virtual std::vector<const Rp4TreeNode*> children() const {
        std::vector<const Rp4TreeNode*> dst = {
            dynamic_cast<const Rp4TreeNode*>(&target)
        };
        add(dst, entries);
        return std::move(dst);
    }
};

class Rp4DirectTransition : public Rp4Transition {
public:
    Rp4TransitionEntry entry;
    Rp4DirectTransition() {}
    Rp4DirectTransition(Rp4TransitionEntry _entry): entry(std::move(_entry)) {}
    virtual std::string toString() const {
        return "transition-direct";
    }
    virtual std::vector<const Rp4TreeNode*> children() const {
        return { dynamic_cast<const Rp4TreeNode*>(&entry) };
    }
};

class Rp4StateDef : public Rp4TreeNode {
public:
    std::string name;
    Rp4Extract extract;
    std::shared_ptr<Rp4Transition> transition;
    Rp4StateDef() {}
    Rp4StateDef(std::string _name, Rp4Extract _extract, std::shared_ptr<Rp4Transition> _transition):
        name(std::move(_name)), extract(std::move(_extract)), transition(std::move(_transition)) {}
    virtual std::string toString() const {
        return "state-def(" + name + ")";
    }
    virtual std::vector<const Rp4TreeNode*> children() const {
        return {
            dynamic_cast<const Rp4TreeNode*>(&extract), 
            dynamic_cast<const Rp4TreeNode*>(transition.get())
        };
    }
};