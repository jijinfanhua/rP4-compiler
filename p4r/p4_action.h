#pragma once

#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <iostream>
#include "p4_rename.h"
#include "p4_field.h"
#include "p4_parameter.h"

class P4Primitive {
public:
    std::string op;
    std::vector<P4Parameter> parameters;
};

class P4Action {
public:
    std::string name;
    std::vector<P4RuntimeData> runtime_data;
    std::vector<P4Primitive> primitives;
};

static P4Rename<P4Action>* action_rename = nullptr;

class P4Actions : public std::vector<P4Action> {
public:
    std::string translate_name(const std::string& name) const;
    friend std::ostream & operator<<(std::ostream & out, P4Actions const & actions);
};

std::string P4Actions::translate_name(const std::string& name) const {
    if (action_rename == nullptr) {
        action_rename = new P4Rename<P4Action>(*this, [](auto & act) {
            return act.name;
        });
    }
    return action_rename->get_name(name);
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
        out << "\taction " << actions.translate_name(action.name) << "(";
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
                p.parameters[0].output(out, &(action.runtime_data)) << " = ";
                p.parameters[1].output(out, &(action.runtime_data)) << ";" << std::endl;
            } else {
                out << p.op << "(";
                for (bool first = true; auto & pp : p.parameters) {
                    if (!first) {
                        out << ", ";
                    } else {
                        first = false;
                    }
                    pp.output(out, &(action.runtime_data));
                }
                out << ");" << std::endl;
            }
        }
        out << "\t}" << std::endl;
    }
    return out << "}" << std::endl;
}