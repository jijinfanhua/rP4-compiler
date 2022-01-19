#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "p4_header.h"

class P4Field : public std::vector<std::string> {
public:
    static P4Headers& headers;
    bool is_header() const;
    std::string prefix() const;
    friend std::ostream & operator<<(std::ostream & out, P4Field const & f);
    P4Field() : std::vector<std::string>() {}
    P4Field(const std::vector<std::string>& v): std::vector<std::string>(v) {}
};

bool P4Field::is_header() const {
    auto & hh = headers.headers;
    auto hi = std::find_if(std::begin(hh), std::end(hh), [&](auto& h) {
        return h.name == (*this)[0];
    });
    return hi != std::end(hh) && !hi->metadata;
}

std::string P4Field::prefix() const {
    auto & hh = headers.headers;
    auto hi = std::find_if(std::begin(hh), std::end(hh), [&](auto& h) {
        return h.name == (*this)[0];
    });
    if (hi != std::end(hh)) {
        return hi->translated_prefix();
    } else {
        return "";
    }
}

std::ostream & operator<<(std::ostream & out, P4Field const & f) {
    auto & hh = f.headers.headers;
    out << f.prefix();
    for (auto s = std::next(std::begin(f), 1); s != std::end(f); s++) {
        out << ".";
        if (*s == "$valid$") {
            out << "isValid()";
        } else {
            out << *s;
        }
    }
    return out;
}