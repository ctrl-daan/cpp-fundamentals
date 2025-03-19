#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode) {
    std::string err;

    return err;
};

bool doPasswordsMatch(std::string s1, std::string s2) {

    if (s1 == s2)
        return true;
    else
        return false;    
};

ErrorCode checkPasswordRules(std::string) {
    ErrorCode myError;

    return myError;
};

ErrorCode checkPassword(std::string, std::string) {
    ErrorCode myError;

    return myError;
};

// // TODO: I'm empty :) Put enum and function headers here.
// /// Don't forget the header guard - #pragma once