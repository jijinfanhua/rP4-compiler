#pragma once

#include <vector>
#include <string>
#include <iostream>

struct P4HeaderField {
    std::string name;
    int width;
};

class P4HeaderType {
public:
    std::string name;
    std::vector<P4HeaderField> fields;
};

class P4HeaderTypes : public std::vector<P4HeaderType> {
    friend std::ostream &operator<<(std::ostream & out, P4HeaderTypes const & vh);
};

std::ostream &operator<<(std::ostream & out, P4HeaderTypes const & vh) {
    for (auto hi = std::next(std::begin(vh), 2); hi != std::end(vh); hi++) {
        auto & h = *hi;
        out << "header " << h.name << " {" << std::endl;
        for (auto & f : h.fields) {
            out << "\tbit<" << f.width << ">\t" << f.name << ";" << std::endl;
        }
        out << "}" << std::endl;
    }
    return out;
}