#pragma once

#include "ipsa_value.h"

class IpsaModule {
public:
    virtual std::shared_ptr<IpsaValue> toIpsaValue() const = 0;
};

template <typename T, std::enable_if_t<std::is_base_of_v<IpsaModule, T>, bool> = true>
std::shared_ptr<IpsaValue> makeValue(std::vector<T> _value) {
    std::vector<std::shared_ptr<IpsaValue>> dst;
    for (auto & v : _value) {
        auto x = dynamic_cast<const IpsaModule*>(&v);
        dst.push_back(x->toIpsaValue());
    }
    return makeValue(dst);
}