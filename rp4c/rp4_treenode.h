#pragma once

#include <memory>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <any>

// Base class for tree nodes
class Rp4TreeNode {
public:
    Rp4TreeNode() {}
    virtual std::vector<std::shared_ptr<Rp4TreeNode>> children() const {
        return {};
    }
    virtual std::string toString() const = 0;
}; 

template <class T, std::enable_if_t<std::is_base_of_v<Rp4TreeNode, T>, bool> = true>
std::vector<std::shared_ptr<Rp4TreeNode>> mapped(const std::vector<T>& v) {
    std::vector<std::shared_ptr<Rp4TreeNode>> dst;
    std::transform(std::begin(v), std::end(v), std::begin(dst), [](const T& x) {
        return std::make_shared(&x);
    });
    return dst;
}

template <class T, std::enable_if_t<std::is_base_of_v<Rp4TreeNode, T>, bool> = true>
void add(std::vector<std::shared_ptr<Rp4TreeNode>>& dst, const std::vector<T>& v) {
    std::transform(std::begin(v), std::end(v), std::end(dst), [](const T& x) {
        return std::make_shared(&x);
    });
}

template <class T, std::enable_if_t<std::is_base_of_v<Rp4TreeNode, T>, bool> = true>
void add(std::vector<std::shared_ptr<Rp4TreeNode>>& dst, T& v) {
    dst.push_back(std::make_shared(&v));
}
