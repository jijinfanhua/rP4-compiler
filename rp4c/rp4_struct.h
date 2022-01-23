#pragma once

#include <vector>
#include "rp4_field.h"
#include "rp4_treenode.h"

class Rp4StructDef : public Rp4TreeNode {
public:
    std::string struct_name;
    std::vector<Rp4FieldDef> fields;
    std::string name;
    Rp4StructDef() {}
    Rp4StructDef(std::string _struct_name, std::vector<Rp4FieldDef> _fields, std::string _name) :
            struct_name(std::move(_struct_name)), fields(std::move(_fields)), name(std::move(_name)) {}
    virtual std::string toString() const {
        return "struct-def[" + struct_name + "](" + name + ")";
    }
    virtual std::vector<std::shared_ptr<Rp4TreeNode>> children() const {
        return mapped(fields);
    }
};