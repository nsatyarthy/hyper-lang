// Created by Nishant S on 11/Mar/2022.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include "Hyper.h"
#include "Scanner.h"

void Hyper::run_(std::string text) {
    Scanner scanner(text);
    auto tokens = scanner.getTokens();

    for (const auto& token: tokens) {
        std::cout << token << std::endl;
    }
}

int Hyper::runScript(std::string scriptName) {
    auto ifs = std::ifstream(scriptName);
    std::stringstream sstr;
    while (ifs >> sstr.rdbuf())
        ; // Don't you love C++?

    std::string text = sstr.str();
    run_(text);

    return hadError_;
}

void Hyper::runPrompt() {
    std::string text;

    while (true) {
        std::cout << "> ";
        std::getline(std::cin, text);
        if (text.empty())
            break;
        run_(text);
        hadError_ = false; // Let it slide if user makes a mistake
    }
}

void Hyper::error_(int line, std::string msg) {

}

void Hyper::report_(int line, std::string where, std::string msg) {
    std::cerr << "[line " << line << "] Error" + where + ": " + msg;
    hadError_ = true;
}
