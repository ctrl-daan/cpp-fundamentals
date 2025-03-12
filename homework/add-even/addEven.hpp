#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum = 0;
    for (auto c : numbers)
        if (c % 2 == 0) {
            sum += c;
        }

    return sum;
}
