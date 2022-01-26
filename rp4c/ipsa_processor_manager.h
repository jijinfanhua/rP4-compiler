#pragma once

#include "ipsa_stage_manager.h"
#include "ipsa_header_manager.h"
#include "ipsa_level_manager.h"

/*----------------------------------------------------------------
    does not aggregate the stages
    each stage occupy a different
*/
// generate the processors
class IpsaProcessorManager {
public:
    IpsaStageManager* stage_manager;
    IpsaHeaderManager* header_manager;
    IpsaLevelManager* level_manager;

};