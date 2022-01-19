#pragma once

#include "p4_header.h"
#include "p4_parser.h"
#include "p4_action.h"
#include "p4_pipeline.h"

class P4Json {
public:
    P4Headers headers;
    P4Parsers parsers;
    P4Actions actions;
    P4Pipelines pipelines;

    friend std::ostream& operator<<(std::ostream& out, P4Json const & p4);
};

std::ostream& operator<<(std::ostream& out, P4Json const & p4) {
    out << p4.headers << std::endl;
    out << p4.parsers << std::endl;
    out << p4.actions << std::endl;
    out << p4.pipelines << std::endl;
    return out;
}