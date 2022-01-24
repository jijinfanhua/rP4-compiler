#pragma once

#include "rp4_header.h"
#include "rp4_struct.h"
#include "rp4_parser.h"

class Rp4SemValue {
public:
    int sv_int;
    std::string sv_str;

    Rp4HeaderDef sv_header_def;
    std::vector<Rp4HeaderDef> sv_header_defs;
    Rp4FieldDef sv_field_def;
    std::vector<Rp4FieldDef> sv_field_defs;
    std::shared_ptr<Rp4Type> sv_type;
    Rp4StructDef sv_struct_def;
    std::vector<Rp4StructDef> sv_struct_defs;
    Rp4ParserDef sv_parser_def;
    Rp4StateDef sv_state_def;
    std::vector<Rp4StateDef> sv_state_defs;
    Rp4Extract sv_extract_stmt;
    std::shared_ptr<Rp4Transition> sv_transition_stmt;
    Rp4Member sv_member;
    Rp4Field sv_field;
    std::shared_ptr<Rp4Key> sv_key;
    Rp4TransitionEntry sv_transition_entry;
    std::vector<Rp4TransitionEntry> sv_transition_entries;
};

class Rp4Ast : public Rp4TreeNode {
public:
    std::vector<Rp4HeaderDef> header_defs;
    std::vector<Rp4StructDef> struct_defs;
    Rp4ParserDef parser_def;

    Rp4Ast(
        std::vector<Rp4HeaderDef> _header_defs,
        std::vector<Rp4StructDef> _struct_defs,
        Rp4ParserDef _parser_def
        ) : 
        header_defs(std::move(_header_defs)), 
        struct_defs(std::move(_struct_defs)),
        parser_def(std::move(_parser_def))
        {}
    
    virtual std::vector<const Rp4TreeNode*> children() const {
        auto dst = mapped(header_defs);
        add(dst, struct_defs);
        add(dst, parser_def);
        return dst;
    }
    virtual std::string toString() const {
        return "Rp4Ast";
    }
};

extern std::unique_ptr<Rp4Ast> tree;

#ifndef YYSTYPE
#define YYSTYPE Rp4SemValue
#endif