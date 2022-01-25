#pragma once

#include "ipsa_header_manager.h"

enum IpsaOperandType {
    OPT_CONST, OPT_EXPR, OPT_FIELD
};

static inline std::string to_string(IpsaOperandType op) {
    static const std::map<IpsaOperandType, std::string> m = {
        {OPT_CONST, "CONST"},
        {OPT_EXPR, "EXPR"},
        {OPT_FIELD, "FIELD"}
    };
    return m.at(op);
}

class IpsaOperand : public IpsaModule {
public:
    IpsaOperandType type;
    virtual bool isConstant() const { return false; }
    virtual bool isField() const { return false; }
    virtual bool isExpression() const { return false; }
    virtual bool isGateParameter() const { return false; }
    virtual std::shared_ptr<IpsaValue> getValue() const = 0;
    virtual std::shared_ptr<IpsaValue> toIpsaValue() const {
        std::map<std::string, std::shared_ptr<IpsaValue>> dst = {
            {"type", makeValue(to_string(type))},
            {"value", getValue()}
        };
        return makeValue(dst);
    }
};

class IpsaConstant : IpsaOperand {
public:
    int value;
    IpsaConstant(int _value) : value(_value) {}
    virtual bool isConstant() const { return true; }
    virtual bool isGateParameter() const { return true; }
    virtual std::shared_ptr<IpsaValue> getValue() const {
        return makeValue(value);
    }
};

class IpsaField : IpsaOperand {
public:
    const IpsaHeaderField* header_field;
    IpsaField(const IpsaHeaderField* _header_field): header_field(_header_field) {}
    virtual bool isField() const { return true; }
    virtual bool isGateParameter() const { return true; }
    virtual std::shared_ptr<IpsaValue> getValue() const {
        if (header_field != nullptr) {
            return header_field->toIpsaValue();
        } else {
            return nullptr;
        }
    }
};

class IpsaExpression : public IpsaOperand {
public:
    Rp4Operator op;
    std::shared_ptr<IpsaOperand> left;
    std::shared_ptr<IpsaOperand> right;
    IpsaExpression(Rp4Operator _op, std::shared_ptr<IpsaOperand> _left, std::shared_ptr<IpsaOperand> _right):
        op(_op), left(std::move(_left)), right(std::move(_right)) {}
    virtual bool isExpression() const { return true; }
    virtual std::shared_ptr<IpsaValue> getValue() const {
        std::map<std::string, std::shared_ptr<IpsaValue>> dst = {
            {"op", makeValue(to_string(op))},
            {"left", left != nullptr ? left->toIpsaValue() : nullptr},
            {"right", right != nullptr ? right->toIpsaValue() : nullptr}
        };
        return makeValue(dst);
    }
};