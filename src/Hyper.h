// Created by Nishant S on 11/Mar/2022.
//
#ifndef _HYPER_H_
#define _HYPER_H_

#include <string>

class Hyper {
public:
    void runPrompt();
    int runScript(std::string scriptName);

private:
    void run_(std::string text);
    void error_(int line, std::string msg);
    void report_(int line, std::string where, std::string msg);

    bool hadError_ = false;
};


#endif // _HYPER_H_
