#include "validation.hpp"

std::string getErrorMessage(const ErrorCode &err) {
    if (err == ErrorCode::Ok) {
        return "Ok";

    } else if (err == ErrorCode::PasswordNeedsAtLeastNineCharacters) {
        return "Error, password needs at least nine characters.";

    } else if (err == ErrorCode::PasswordNeedsAtLeastOneNumber) {
        return "Error, password needs at least one number";
    } else if (err == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) {
        return "Error, password needs at least one special character";
    } else if (err == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) {
        return "Error, password needs at least one upper case letter";
    } else if (err == ErrorCode::PasswordsDoNotMatch) {
        return "Error, passwords do not match.";
    } else {
        return "Unknown Error";
    }
};

bool doPasswordsMatch(const std::string &s1, const std::string &s2) {
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