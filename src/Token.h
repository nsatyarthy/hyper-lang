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

static std::string tokenTypeToString(TokenType type) {
    std::string str;
    switch (type) {
        case TokenType::LEFT_PAREN       : str = "LEFT_PAREN"       ; break;
        case TokenType::RIGHT_PAREN      : str = "RIGHT_PAREN"      ; break;
        case TokenType::LEFT_BRACE       : str = "LEFT_BRACE"       ; break;
        case TokenType::RIGHT_BRACE      : str = "RIGHT_BRACE"      ; break;
        case TokenType::COMMA            : str = "COMMA"            ; break;
        case TokenType::DOT              : str = "DOT"              ; break;
        case TokenType::MINUS            : str = "MINUS"            ; break;
        case TokenType::PLUS             : str = "PLUS"             ; break;
        case TokenType::SEMICOLON        : str = "SEMICOLON"        ; break;
        case TokenType::SLASH            : str = "SLASH"            ; break;
        case TokenType::STAR             : str = "STAR"             ; break;
        case TokenType::EQUALS           : str = "EQUALS"           ; break;
        case TokenType::DOUBLE_EQUAL     : str = "DOUBLE_EQUAL"     ; break;
        case TokenType::BANG             : str = "BANG"             ; break;
        case TokenType::BANG_EQUAL       : str = "BANG_EQUAL"       ; break;
        case TokenType::GREATER          : str = "GREATER"          ; break;
        case TokenType::GREATER_EQUAL    : str = "GREATER_EQUAL"    ; break;
        case TokenType::LESS             : str = "LESS"             ; break;
        case TokenType::LESS_EQUAL       : str = "LESS_EQUAL"       ; break;
        case TokenType::IDENTIFIER       : str = "IDENTIFIER"       ; break;
        case TokenType::STRING           : str = "STRING"           ; break;
        case TokenType::NUMBER           : str = "NUMBER"           ; break;
        case TokenType::IF               : str = "IF"               ; break;
        case TokenType::ELSE             : str = "ELSE"             ; break;
        case TokenType::AND              : str = "AND"              ; break;
        case TokenType::OR               : str = "OR"               ; break;
        case TokenType::TRUE             : str = "TRUE"             ; break;
        case TokenType::FALSE            : str = "FALSE"            ; break;
        case TokenType::FOR              : str = "FOR"              ; break;
        case TokenType::WHILE            : str = "WHILE"            ; break;
        case TokenType::NIL              : str = "NIL"              ; break;
        case TokenType::CLASS            : str = "CLASS"            ; break;
        case TokenType::FUNC             : str = "FUNC"             ; break;
        case TokenType::VAR              : str = "VAR"              ; break;
        case TokenType::SUPER            : str = "SUPER"            ; break;
        case TokenType::THIS             : str = "THIS"             ; break;
        case TokenType::RETURN           : str = "RETURN"           ; break;
        case TokenType::PRINT            : str = "PRINT"            ; break;
        case TokenType::END_OF_FILE      : str = "END_OF_FILE"      ; break;
        default                          : str = "INVALID_TOKEN"    ; break;
    }

    return str;
}

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
