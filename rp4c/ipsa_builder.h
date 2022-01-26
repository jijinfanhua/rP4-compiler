#pragma once

#include "ipsa_level_manager.h"

class IpsaBuilder {
public:
    IpsaHeaderManager header_manager;
    IpsaLevelManager level_manager;
    IpsaBuilder() {}
    void load(const Rp4Ast* ast) {
        header_manager.load(ast);
        level_manager.load(ast);
    }
};