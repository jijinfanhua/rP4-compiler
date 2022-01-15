#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "p4_header.h"

enum class P4FieldType {
    none, standard_metadata, metadata, header
};

class P4Field : public std::vector<std::string> {
public:
    static P4Headers& vh;
    friend P4FieldType get_type(P4Field const & f);
    friend std::ostream & operator<<(std::ostream & out, P4Field const & f);
};

P4FieldType get_type(P4Field const & f) {
    auto pos = std::find_if(std::begin(f.vh), std::end(f.vh), [&](auto& h) { return h.name == f[0]; });
    if (pos != std::end(f.vh)) {
        if (pos->id < 2) {
            return P4FieldType::standard_metadata;
        } else if (pos->metadata) {
            return P4FieldType::metadata;
        } else {
            return P4FieldType::header;
        }
    }
    return P4FieldType::none;
}

std::ostream & operator<<(std::ostream & out, P4Field const & f) {
    if (auto s = std::begin(f); s != std::end(f)) {
        if (*s == "standard_metadata") {
            out << "standard_metadata";
            s++;
        } else {
            auto ft = get_type(f);
            if (ft == P4FieldType::header) {
                out << "hdr";
            } else if (ft == P4FieldType::metadata) {
                out << "meta";
            }
        }
        for (; s != std::end(f); s++) {
            out << ".";
            if (*s == "$valid$") {
                out << "isValid()";
            } else {
                out << *s;
            }
        }
    }
    return out;
}

