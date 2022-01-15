#pragma once

#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <iostream>
#include "p4_field.h"

class P4RuntimeData {
public:
    std::string name;
    int bitwidth;
};

class P4PrimitiveParamter;
class P4Expression {
public:
    std::string op;
    P4PrimitiveParamter* left;
    P4PrimitiveParamter* right;
};

class P4PrimitiveParamter {
public:
    std::string type;
    int runtime_data_value;
    std::string header_value;
    std::string hexstr_value;
    P4Field field_value;
    P4Expression* expression_value;
};

class P4Primitive {
public:
    std::string op;
    std::vector<P4PrimitiveParamter> parameters;
};

class P4Action {
public:
    std::string name;
    std::vector<P4RuntimeData> runtime_data;
    std::vector<P4Primitive> primitives;
    std::ostream & out_prim(std::ostream & out, P4PrimitiveParamter const & pp) const;
};

class P4Actions : public std::vector<P4Action> {
public:
    friend std::ostream & operator<<(std::ostream & out, P4Actions const & actions);
};

std::ostream & P4Action::out_prim(std::ostream & out, P4PrimitiveParamter const & pp) const {
    if (pp.type == "field") {
        out << pp.field_value;
    } else if (pp.type == "runtime_data") {
        out << runtime_data[pp.runtime_data_value].name;
    } else if (pp.type == "hexstr") {
        out << pp.hexstr_value;
    } else if (pp.type == "header") {
        out << pp.header_value;
    } else if (pp.type == "expression") {
        if (auto & exp = pp.expression_value; exp != nullptr) {
            out << "(";
            if (exp->left != nullptr) {
                out_prim(out, *(exp->left)) << " ";
            }
            out << exp->op;
            if (exp->right != nullptr) {
                out_prim(out << " ", *(exp->right));
            }
            out << ")";
        }
    }
    return out;
}

std::ostream & operator<<(std::ostream & out, P4Actions const & actions) {
    std::set<std::string> action_names;
    out << "actions {" << std::endl;
    for (auto & action : actions) {
        if (action_names.find(action.name) != action_names.end()) {
            continue;
        } else {
            action_names.insert(action.name);
        }
        out << "\taction " << action.name.substr(action.name.find_last_of('.') + 1) << "(";
        for (bool first = true; auto & rd : action.runtime_data) {
            if (!first) {
                out << ", ";
            } else {
                first = false;
            }
            out << "bit<" << rd.bitwidth << "> " << rd.name;
        }
        out << ") {" << std::endl;
        for (auto & p : action.primitives) {
            out << "\t\t";
            if (p.op == "assign") {
                action.out_prim(action.out_prim(out, p.parameters[0]) << " = ", p.parameters[1]) << ";" << std::endl;
            } else {
                out << p.op << "(";
                for (bool first = true; auto & pp : p.parameters) {
                    if (!first) {
                        out << ", ";
                    } else {
                        first = false;
                    }
                    action.out_prim(out, pp);
                }
                out << ");" << std::endl;
            }
        }
        out << "\t}" << std::endl;
    }
    return out << "}" << std::endl;
}