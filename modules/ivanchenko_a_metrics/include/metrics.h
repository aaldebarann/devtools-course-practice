// Copyright 2024 Ivanchenko Aleksei

#pragma once

#include <stdexcept>
#include <utility>
#include <vector>

namespace metrics {
    size_t l1(std::vector<float> v1, std::vector<float> v2);
    size_t l2(std::vector<float> v1, std::vector<float> v2);
    size_t l3(std::vector<float> v1, std::vector<float> v2);
    size_t l4(std::vector<float> v1, std::vector<float> v2);
    size_t linf(std::vector<float> v1, std::vector<float> v2);
}
