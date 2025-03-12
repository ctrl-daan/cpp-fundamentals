#pragma once
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int num = 0;

    for (const auto &c : vec) {
        num = std::min(num, c);
    }
    for (const auto &n : vec) {
        num = std::max(num, n);
    }

    return num;
}