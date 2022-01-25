#pragma once

#include "rp4_stage_matcher.h"
#include "ipsa_expression.h"

class IpsaGateway : public IpsaModule {
public:
    static IpsaHeaderManager& manager;
    IpsaGateway(const Rp4StageMatcher* matcher);
};

