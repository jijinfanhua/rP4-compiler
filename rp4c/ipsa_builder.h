#pragma once

#include "ipsa_level_manager.h"
#include "ipsa_action_manager.h"
#include "ipsa_table_manager.h"
#include "ipsa_processor_manager.h"
#include "ipsa_gateway_manager.h"

class IpsaBuilder {
public:
    IpsaHeaderManager header_manager;
    IpsaLevelManager level_manager;
    IpsaActionManager action_manager;
    IpsaTableManager table_manager;
    IpsaStageManager stage_manager;
    IpsaProcessorManager processor_manager;
    IpsaGatewayManager gateway_manager;
    IpsaBuilder():
        header_manager(), 
        level_manager(&header_manager),
        action_manager(&header_manager),
        table_manager(&header_manager, &action_manager),
        stage_manager(),
        gateway_manager(&header_manager, &stage_manager, &table_manager),
        processor_manager(
            &stage_manager,
            &header_manager,
            &level_manager, 
            &action_manager,
            &table_manager
        ) {}
    void load(const Rp4Ast* ast) {
        header_manager.load(ast);
        level_manager.load(ast);
        action_manager.load(ast);
        table_manager.load(ast);
        stage_manager.load(ast);
        processor_manager.initializeStages();
        gateway_manager.load();
    }
};