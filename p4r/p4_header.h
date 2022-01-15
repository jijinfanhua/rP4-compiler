#pragma once

#include <vector>
#include <string>
#include <iostream>

class P4Header {
public:
    std::string name;
    int id;
    std::string header_type_name;
    bool metadata;
};

class P4Headers : public std::vector<P4Header> {
    friend std::ostream & operator<<(std::ostream & out, P4Headers const & hs);
};

std::ostream & operator<<(std::ostream & out, P4Headers const & hs) {
    out << "struct metadata {" << std::endl;
    for (auto & h : hs) {
        if (h.metadata && h.id >= 2) {
            out << "\t" << h.header_type_name << " " << h.name << std::endl;
        }
    }
    out << "} meta;" << std::endl;
    out << std::endl;
    out << "struct header {" << std::endl;
    for (auto & h : hs) {
        if (!h.metadata) {
            out << "\t" << h.header_type_name << " " << h.name << std::endl;
        }
    }
    return out << "} hdr;" << std::endl;
}