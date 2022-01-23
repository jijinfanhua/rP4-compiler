#include "rp4_compiler.h"

std::unique_ptr<Rp4Compiler> tree;

std::string get_offset(int width) {
    return std::string(width, ' ');
}

void print_node(const Rp4TreeNode* node, int tab) {
    auto offset = get_offset(tab);
    tab += 2;
    for (auto c : node->children()) {
        print_node(c.get(), tab);
    }
}

void print_tree(const Rp4Compiler* compiler) {
    print_node(compiler, 0);
}