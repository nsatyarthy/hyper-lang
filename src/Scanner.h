// Created by Nishant S on 11/Mar/2022.
//
#ifndef _SCANNER_H_
#define _SCANNER_H_

#include <string>
#include <vector>

using TokenList = std::vector<std::string>;

class Scanner {
public:
    Scanner(std::string text);
    TokenList getTokens();
};


#endif // _SCANNER_H_
