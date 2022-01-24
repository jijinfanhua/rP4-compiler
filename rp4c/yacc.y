%{
#include "rp4_ast.h"
#include "yacc.hpp"
#include <iostream>
#include <memory>

int yylex(YYSTYPE *yylval, YYLTYPE *yylloc);

void yyerror(YYLTYPE *locp, const char* s) {
    std::cerr << "Parser Error at line " << locp->first_line << " column " << locp->first_column << ": " << s << std::endl;
}

%}

// request a pure (reentrant) parser
%define api.pure full
// enable location in error handler
%locations

// keywords
%token BIT STRUCT
%token TRUE FALSE
%token HEADER HEADERS
%token PARSER STATE TRANSITION PACKET PACKET_IN
%token DEFAULT ACCEPT EXTRACT SELECT
%token ACTIONS ACTION NOACTION
%token TABLES TABLE KEY SIZE DEFAULT_ACTION ENTRIES
%token EXACT TERNARY LPM
%token CONTROL MATCHER EXECUTOR SWITCH HIT MISS
%token STANDARD_METADATA

// non-keywords
%token EQU NEQ LEQ GEQ T_EOF
%token ANDANDAND DIVDIVDIV

// type-specific tokens
%token <sv_str> IDENTIFIER VALUE_STRING
%token <sv_int> VALUE_INT

%type <sv_header_defs> header_defs
%type <sv_header_def> header_def
%type <sv_field_defs> field_defs
%type <sv_field_def> field_def
%type <sv_type> type_def
%type <sv_struct_defs> struct_defs
%type <sv_struct_def> struct_def
%type <sv_parser_def> parser_def
%type <sv_state_def> state_def
%type <sv_state_defs> state_defs
%type <sv_extract_stmt> extract_stmt
%type <sv_transition_stmt> transition_stmt
%type <sv_member> member
%type <sv_field> field
%type <sv_key> key_def
%type <sv_transition_entry> transition_entry direct_entry
%type <sv_transition_entries> transition_entries

%%

start:  
        header_defs struct_defs parser_def
    {
        tree = std::make_unique<Rp4Ast>($1, $2, $3);
        YYACCEPT;
    }
    ;

// headers
header_defs:    
        /* epsilon */
    {
        $$ = {};
    }
    |   header_defs header_def
    {
        $$.push_back($2);
    }
    ;

header_def:
        HEADER IDENTIFIER '{' field_defs '}'
    {
        $$ = Rp4HeaderDef($2, $4);
    }
    ;

field_defs:
        /* epsilon */
    {
        $$ = {};
    }
    |   field_defs field_def ';'
    {
        $$.push_back($2);
    }
    ;

field_def:
        type_def IDENTIFIER
    {
        $$ = Rp4FieldDef($1, $2);
    }
    ;

type_def:
        BIT '<' VALUE_INT '>'
    {
        $$ = std::make_shared<Rp4BitType>($3);
    }
    |   IDENTIFIER
    {
        $$ = std::make_shared<Rp4NamedType>($1);
    }
    ;

struct_defs:
        /* epsilon */
    {
        $$ = {};
    }
    |   struct_defs struct_def
    {
        $$.push_back($2);
    }
    ;

struct_def:
        STRUCT IDENTIFIER '{' field_defs '}' IDENTIFIER ';'
    {
        $$ = Rp4StructDef($2, $4, $6);
    }
    |   STRUCT HEADERS '{' field_defs '}' IDENTIFIER ';'
    {
        $$ = Rp4StructDef("headers", $4, $6, true);
    }
    ;

parser_def:
        PARSER IDENTIFIER '(' PACKET_IN PACKET ')' '{' state_defs '}'
    {
        $$ = Rp4ParserDef($2, $8);
    }
    ;

state_defs:
        /* epsilon */
    {
        $$ = {};
    }
    |   state_defs state_def
    {
        $$.push_back($2);
    }
    ;

state_def:
    STATE IDENTIFIER '{' extract_stmt transition_stmt '}'
    {
        $$ = Rp4StateDef($2, $4, $5);
    }
    ;

extract_stmt:
    PACKET '.' EXTRACT '(' member ')' ';'
    {
        $$ = Rp4Extract($5);
    }
    ;

member:
    IDENTIFIER '.' IDENTIFIER
    {
        $$ = Rp4Member($1, $3);
    }
    ;

transition_stmt:
    TRANSITION SELECT '(' field ')' '{' transition_entries '}'
    {
        $$ = std::make_shared<Rp4SelectTransition>($4, $7);
    }
    |   TRANSITION direct_entry ';'
    {
        $$ = std::make_shared<Rp4DirectTransition>($2);
    }
    ;

direct_entry:
    IDENTIFIER
    {
        $$ = Rp4TransitionEntry(std::make_shared<Rp4DefaultKey>(), $1);
    }
    |   ACCEPT
    {
        $$ = Rp4TransitionEntry(std::make_shared<Rp4DefaultKey>(), "accept", true);
    }
    ;

field:
    IDENTIFIER '.' IDENTIFIER '.' IDENTIFIER
    {
        $$ = Rp4Field($1, $3, $5);
    }
    ;

transition_entries:
        /* epsilon */
    {
        $$ = {};
    }
    |   transition_entries transition_entry
    {
        $$.push_back($2);
    }
    ;

transition_entry:
    key_def ':' IDENTIFIER ';'
    {
        $$ = Rp4TransitionEntry($1, $3);
    }
    |   key_def ':' ACCEPT ';'
    {
        $$ = Rp4TransitionEntry($1, "accept", true);
    }
    ;

key_def:
        VALUE_INT
    {
        $$ = std::make_shared<Rp4ExactKey>($1);
    }
    |   VALUE_INT ANDANDAND VALUE_INT
    {
        $$ = std::make_shared<Rp4TernaryKey>($1, $3);
    }
    |   VALUE_INT DIVDIVDIV VALUE_INT
    {
        $$ = std::make_shared<Rp4LpmKey>($1, $3);
    }
    |   DEFAULT
    {
        $$ = std::make_shared<Rp4DefaultKey>();
    }
    |   '*'
    {
        $$ = std::make_shared<Rp4DefaultKey>();
    }
    ;

%%