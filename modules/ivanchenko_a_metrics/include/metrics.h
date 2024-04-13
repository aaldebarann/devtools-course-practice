// Copyright 2024 Ivanchenko Aleksei

#pragma once

#include <stdexcept>
#include <utility>
#include <vector>
#include <algorithm>

namespace metrics {
    float l1(std::vector<float> v1, std::vector<float> v2);
    float l2(std::vector<float> v1, std::vector<float> v2);
    float l3(std::vector<float> v1, std::vector<float> v2);
    float l4(std::vector<float> v1, std::vector<float> v2);
    float linf(std::vector<float> v1, std::vector<float> v2);
}
