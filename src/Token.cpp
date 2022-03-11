// Created by Nishant S on 11/Mar/2022.
//
#include "Token.h"

Token::Token(TokenType type, std::string lexeme, std::string literal, int line)
    : type_(type), lexeme_(lexeme), literal_(literal), line_(line) {
}

std::string Token::toString() {
    return "TODO: NOT IMPLEMENTED" ;
}
