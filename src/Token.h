// Created by Nishant S on 11/Mar/2022.
//
#ifndef _TOKEN_H_
#define _TOKEN_H_

#include <string>

enum class TokenType {
    LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
    COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,

    EQUALS, DOUBLE_EQUAL, BANG, BANG_EQUAL,
    GREATER, GREATER_EQUAL, LESS, LESS_EQUAL,

    IDENTIFIER, STRING, NUMBER,

    IF, ELSE, AND, OR, TRUE, FALSE, FOR, WHILE,  NIL,
    CLASS, FUNC, VAR, SUPER, THIS, RETURN, PRINT, END_OF_FILE

};

class Token {
public:
    Token(TokenType type, std::string lexeme, std::string literal, int line);
    std::string toString();

private:
    const TokenType type_;
    const std::string lexeme_;
    const std::string literal_;
    const int line_;
};


#endif // _TOKEN_H_
