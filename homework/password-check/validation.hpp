#pragma once
#include <string>

enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,    
};


std::string getErrorMessage(const ErrorCode &err);
bool doPasswordsMatch(const std::string &s1, const std::string &s2);
ErrorCode checkPasswordRules(std::string);
ErrorCode checkPassword(std::string, std::string);