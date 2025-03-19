#include "validation.hpp"
#include <algorithm>
#include <cctype>

std::string getErrorMessage(const ErrorCode &err) {
    if (err == ErrorCode::Ok) {
        return "Ok";
    } else if (err == ErrorCode::PasswordNeedsAtLeastNineCharacters) {
        return "Password needs to have at least nine characters";
    } else if (err == ErrorCode::PasswordNeedsAtLeastOneNumber) {
        return "Password needs to have at least one number";
    } else if (err == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) {
        return "Password needs to have at least one special character";
    } else if (err == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) {
        return "Password needs to have at least one uppercase letter";
    } else if (err == ErrorCode::PasswordsDoNotMatch) {
        return "Passwords do not match";
    } else {
        return "Unknown Error";
    }
};

bool doPasswordsMatch(const std::string& s1, const std::string& s2) {
    if (s1 == s2) {
        return true;
    }
    else {
        return false;
    }
};

ErrorCode checkPasswordRules(const std::string& pass) {
    if (pass.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (std::none_of(pass.cbegin(), pass.cend(), isdigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (std::none_of(pass.cbegin(), pass.cend(), isupper)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else if (std::none_of(pass.cbegin(), pass.cend(), ispunct)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else {
        return ErrorCode::Ok;
    }
};

ErrorCode checkPassword(const std::string& s1, const std::string& s2) {
    if (doPasswordsMatch(s1, s2))
    {
        return checkPasswordRules(s1);
    }
    else
    {
        return ErrorCode::PasswordsDoNotMatch;
    }
};