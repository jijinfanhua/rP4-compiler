#pragma once

#include "rp4_stage_matcher.h"
#include "ipsa_expression.h"

enum IpsaGatewayEntryType {
    GTW_ET_TABLE, GTW_ET_STAGE
};

static inline std::string to_string(IpsaGatewayEntryType op) {
    static const std::map<IpsaGatewayEntryType, std::string> m = {
        {GTW_ET_TABLE, "TABLE"},
        {GTW_ET_STAGE, "STAGE"}
    };
    return m.at(op);
}

class IpsaGatewayEntry : public IpsaModule {
public:
    IpsaGatewayEntryType type;
    virtual int getId() const = 0;
    virtual std::shared_ptr<IpsaValue> toIpsaValue() const {
        std::map<std::string, std::shared_ptr<IpsaValue>> dst = {
            {"type", makeValue(to_string(type))},
            {"value", makeValue(getId())}
        };
        return makeValue(dst);
    }
};

class IpsaGatewayTableEntry : public IpsaGatewayEntry {
public:
    int matcher_id; // local id
    int table_id; // global table id
    IpsaGatewayTableEntry(int _table_id): table_id(_table_id) {
        type = GTW_ET_TABLE;
    }
    virtual int getId() const { return matcher_id; }
};

class IpsaGatewayStageEntry : public IpsaGatewayEntry {
public:
    int stage_id;
    IpsaGatewayStageEntry(int _stage_id) : stage_id(_stage_id) {
        type = GTW_ET_STAGE;
    }
    virtual int getId() const { return stage_id; }
};

class IpsaNextTableEntry : public IpsaModule {
public:
    int bitmap;
    std::shared_ptr<IpsaGatewayEntry> value;
    IpsaNextTableEntry() {}
    IpsaNextTableEntry(int _bitmap, std::shared_ptr<IpsaGatewayEntry> _value) : bitmap(_bitmap), value(std::move(_value)) {}
    virtual std::shared_ptr<IpsaValue> toIpsaValue() const {
        std::map<std::string, std::shared_ptr<IpsaValue>> dst = {
            {"bitmap", makeValue(bitmap)},
            {"value", value->toIpsaValue()}
        };
        return makeValue(dst);
    }
};

class IpsaNextTable : public IpsaModule {
public:
    std::shared_ptr<IpsaGatewayEntry> default_entry;
    std::vector<IpsaNextTableEntry> entries;
    IpsaNextTable() {}
    virtual std::shared_ptr<IpsaValue> toIpsaValue() const {
        std::map<std::string, std::shared_ptr<IpsaValue>> dst = {
            {"default", default_entry->toIpsaValue()},
            {"entries", makeValue(entries)}
        };
        return makeValue(dst);
    }
};

class IpsaGateway : public IpsaModule {
public:
    std::vector<IpsaExpression> expressions;
    IpsaNextTable next_table;
    IpsaGateway() {}
    virtual std::shared_ptr<IpsaValue> toIpsaValue() const {
        std::map<std::string, std::shared_ptr<IpsaValue>> dst = {
            {"expressions", makeValue(expressions)},
            {"next_table", next_table.toIpsaValue()}
        };
        return makeValue(dst);
    }
};

