#pragma once

#include "ipsa_header_manager.h"
#include "ipsa_action_manager.h"

class IpsaController {
public:
    IpsaHeaderManager header_manager;
    IpsaActionManager action_manager;
};
