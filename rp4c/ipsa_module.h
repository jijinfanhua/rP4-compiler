#pragma once

#include "ipsa_value.h"

class IpsaModule {
public:
    virtual std::shared_ptr<IpsaValue> toIpsaValue() const = 0;
};