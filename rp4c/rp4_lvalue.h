#pragma once

#include "rp4_treenode.h"
#include "rp4_field.h"

class Rp4Operation : public Rp4TreeNode {

};

class Rp4Operand : public Rp4Operation {

};

class Rp4LValue : public Rp4Operand {

};

class Rp4MetaLValue : public Rp4LValue {
public:
    Rp4Member field;
    Rp4MetaLValue() {}
    Rp4MetaLValue(Rp4Member _field) : field(std::move(_field)) {}
    virtual std::string toString() const {
        return "meta-lvalue";
    }
    virtual std::vector<const Rp4TreeNode*> children() const {
        return { dynamic_cast<const Rp4TreeNode*>(&field) };
    }
};

class Rp4HeaderLValue : public Rp4LValue {
public:
    Rp4Field field;
    Rp4HeaderLValue() {}
    Rp4HeaderLValue(Rp4Field _field) : field(std::move(_field)) {}
    virtual std::string toString() const {
        return "hdr-lvalue";
    }
    virtual std::vector<const Rp4TreeNode*> children() const {
        return { dynamic_cast<const Rp4TreeNode*>(&field) };
    }
};