#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    std::string result;

    if (command == "add") {
        result = std::to_string(first + second);
    } else if (command == "substract") {
        result = std::to_string(first - second);
    } else if (command == "multiply") {
        result = std::to_string(first * second);
    } else {
        result = "Invalid data";
    }

    // TODO: Implement your solution here and return proper value
    return result;
}
