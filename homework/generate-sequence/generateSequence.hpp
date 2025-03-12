#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> vec{};
    int temp = step;
    if (count > 0)
        for (std::size_t i = 0; i < count; i++)
        {
            vec.push_back(temp);
            temp += step;
        }    
    return vec;
}
