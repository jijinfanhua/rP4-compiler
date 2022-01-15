#pragma once

#include <vector>
#include <string>
#include <algorithm>
#include <tuple>
#include <map>
#include <set>
#include <iostream>
#include "p4_field.h"

class P4Key {
public:
    std::string match_type;
    std::string name;
    std::string mask;
};

class P4DefaultEntry {
public:
    int action_id;
    std::vector<std::string> action_data;
};

class P4Table {
public:
    std::string name;
    std::vector<P4Key> key;
    int max_size;
    std::vector<int> action_ids;
    std::vector<std::string> actions;
    std::map<std::string, std::string> next_tables;
    P4DefaultEntry default_entry;
};

class P4ConditionalParameter;
class P4ConditionalExpression {
public:
    std::string op;
    P4ConditionalParameter* left;
    P4ConditionalParameter* right;
};

class P4ConditionalParameter {
public:
    std::string type;
    P4Field field_value;
    P4ConditionalExpression* expression_value;
    std::tuple<std::vector<const P4ConditionalParameter*>, std::vector<std::string>> parse() const;
};

std::tuple<std::vector<const P4ConditionalParameter*>, std::vector<std::string>> P4ConditionalParameter::parse() const {
    if (type == "expression" && expression_value != nullptr) {
        if (expression_value->op == "d2b") {
            return expression_value->right->parse();
        }
        auto not_apply = [](const std::vector<std::string> & v) {
            auto vs = v[0].size();
            std::vector<std::string> ans;
            std::string temp(vs, '1');
            std::string zero(vs, '0');
            auto inc_temp = [&]() {
                for (int k = vs - 1; k >= 0; --k) {
                    if (temp[k] == '1') {
                        temp[k] = '0';
                    } else {
                        temp[k] = '1';
                        break;
                    }
                }
            };
            for (auto & s : v) {
                for (inc_temp(); s != temp; inc_temp()) {
                    ans.push_back(temp);
                }
            }
            for (inc_temp(); zero != temp; inc_temp()) {
                ans.push_back(temp);
            }
            return ans;
        };
        auto and_apply = [](const std::vector<std::string> & v1, const std::vector<std::string> & v2) {
            std::vector<std::string> ans;
            for (auto i1 = std::begin(v1); i1 != std::end(v1); i1++) {
                for (auto i2 = std::begin(v2); i2 != std::end(v2); i2++) {
                    ans.push_back(*i1 + *i2);
                }
            }
            return ans;
        };
        auto or_apply = [&](const std::vector<std::string> & v1, const std::vector<std::string> & v2) {
            std::vector<std::string> ans;
            auto a1 = and_apply(v1, not_apply(v2));
            auto a2 = and_apply(not_apply(v1), v2);
            auto a3 = and_apply(v1, v2);
            for (auto & a : {a1, a2, a3}) {
                ans.insert(std::end(ans), std::begin(a), std::end(a));
            }
            std::sort(std::begin(ans), std::end(ans));
            return ans;
        };
        auto concat_apply = [](const std::vector<const P4ConditionalParameter*> & v1, const std::vector<const P4ConditionalParameter*> & v2) {
            std::vector<const P4ConditionalParameter*> ans;
            for (auto & v : {v1, v2}) {
                ans.insert(std::end(ans), std::begin(v), std::end(v));
            }
            return ans;
        };
        if (expression_value->op == "not") {
            auto [v, b] = expression_value->right->parse();
            return std::tuple(v, not_apply(b));
        }
        if (expression_value->op == "and") {
            auto [vl, bl] = expression_value->left->parse();
            auto [vr, br] = expression_value->right->parse();
            return std::tuple(concat_apply(vl, vr), and_apply(bl, br));
        }
        if (expression_value->op == "or") {
            auto [vl, bl] = expression_value->left->parse();
            auto [vr, br] = expression_value->right->parse();
            return std::tuple(concat_apply(vl, vr), or_apply(bl, br));
        }
    }
    /* else if (type == "field")*/
    return std::tuple(std::vector<const P4ConditionalParameter*> { this }, std::vector<std::string> { "1" });        
}

class P4Conditional {
public:
    std::string name;
    P4ConditionalParameter expression;
    std::string true_next;
    std::string false_next;
};

class P4Pipeline {
public:
    std::string name;
    std::vector<P4Table> tables;
    std::vector<P4Conditional> conditionals;
};

class P4Pipelines : public std::vector<P4Pipeline> {
public:
    friend std::ostream & operator<<(std::ostream & out, P4Pipelines const & vp);
};

std::ostream & operator<<(std::ostream & out, P4Pipelines const & vp) {
    out << "tables {" << std::endl;
    for (auto & pipe : vp) {
        for (auto & table : pipe.tables) {
            out << "\ttable " << table.name.substr(table.name.find_last_of('.')+1) << " {" << std::endl;
            out << "\t\tkey = {" << std::endl;
            for (auto & key : table.key) {
                out << "\t\t\t" << key.name << ": " << key.match_type << ";" << std::endl;
            }
            out << "\t\t}" << std::endl;
            out << "\t\tsize = " << table.max_size << ";" << std::endl;
            if (auto pos = std::find_if(std::begin(table.action_ids), std::end(table.action_ids), [&](int x) {
                return x == table.default_entry.action_id;
            }); pos != std::end(table.action_ids)) {
                auto ds = *std::next(std::begin(table.actions), pos - std::begin(table.action_ids));
                out << "\t\tdefault_action = " << ds.substr(ds.find_last_of('.')+1) << "(";
                for (bool first = true; auto& d : table.default_entry.action_data) {
                    if (!first) {
                        out << ", ";
                    } else {
                        first = false;
                    }
                    out << d;
                }
                out << ");" << std::endl;
            }
            out << "\t}" << std::endl;
        }
    }
    out << "}" << std::endl << std::endl;
    for (auto & p : vp) {
        auto out_next = [&](std::string text) {
            if (text.size() == 0) {
                out << "None";
            } else {
                if (std::find_if(std::begin(p.conditionals), std::end(p.conditionals), [&](auto& cond) {
                    return cond.name == text;
                }) != std::end(p.conditionals)) {
                    out << "stage(" << text << ")";
                } else {
                    out << "table(" << text.substr(text.find_last_of('.')+1) << ")";
                }
            }
        };
        out << "control ";
        if (p.name == "ingress") {
            out << "MyIngress";
        } else if (p.name == "egress") {
            out << "MyEgress";
        } else {
            out << p.name;
        }
        out << " {" << std::endl;
        for (auto & c : p.conditionals) {
            out << "\tstage " << c.name << " {" << std::endl;
            auto [v, b] = c.expression.parse();
            std::set<std::string> hdr_names;
            for (auto& field : v) {
                hdr_names.insert(field->field_value[0]);
            }
            out << "\t\tparser {" << std::endl;
            for (auto& hn : hdr_names) {
                out << "\t\t\t" << hn << ";" << std::endl;
            }
            out << "\t\t};" << std::endl;
            out << "\t\tmatcher {" << std::endl;
            out << "\t\t\tswitch (";
            for (bool first = true; auto & field : v) {
                if (!first) {
                    out << ", ";
                } else {
                    first = false;
                }
                out << field->field_value;
            }
            out << ") {" << std::endl;
            for (auto& cond : b) {
                out << "\t\t\t\t0b" << cond << ": ";
                out_next(c.true_next);
                out << ";" << std::endl;
            }
            out << "\t\t\t\t*: ";
            out_next(c.false_next);
            out << ";" << std::endl;
            out << "\t\t\t}" << std::endl;
            out << "\t\t};" << std::endl;
            out << "\t\texecutor {" << std::endl;
            if (auto t = std::find_if(std::begin(p.tables), std::end(p.tables), [&](auto& table) {
                return table.name == c.true_next || table.name == c.false_next;
            }); t != std::end(p.tables)) {
                for (auto [key, value] : t->next_tables) {
                    out << "\t\t\t" << key.substr(key.find_last_of('.')+1) << ": ";
                    if (value.size() == 0) {
                        out << "None";
                    } else {
                        out << value;
                    }
                    out << ";" << std::endl;
                }
            }
            out << "\t\t};" << std::endl;
            out << "\t}" << std::endl;
        }
        out << "}" << std::endl;
    }
    return out;
}