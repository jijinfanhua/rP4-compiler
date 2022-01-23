#pragma once

#include <vector>
#include <map>
#include "rp4_treenode.h"

enum Rp4Operator {
    OP_EQ, OP_NE, OP_LT, OP_GT, OP_LE, OP_GE
};

static inline std::string to_string(Rp4Operator op) {
    static const std::map<Rp4Operator, std::string> m = {
            {OP_EQ, "=="},
            {OP_NE, "!="},
            {OP_LT, "<"},
            {OP_GT, ">"},
            {OP_LE, "<="},
            {OP_GE, ">="}
    };
    return m.at(op);
}

class Rp4Expression : public Rp4TreeNode {

};

class Rp4Literal : public Rp4Expression {
public:
    int value;

    Rp4Literal(int _value) : value(_value) {}
};

class Rp4Binary : public Rp4Expression {
public:
    Rp4Operator op;
    std::shared_ptr<Rp4Expression> lhs;
    std::shared_ptr<Rp4Expression> rhs;

    Rp4Binary() = default;
    Rp4Binary(Rp4Operator _op, std::shared_ptr<Rp4Expression> _lhs, std::shared_ptr<Rp4Expression> _rhs): op(_op), lhs(_lhs), rhs(_rhs) {}
};

class Rp4LValue : public Rp4Expression {
    
};

