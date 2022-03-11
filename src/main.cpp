// Created by Nishant S on 11/Mar/2022.
//
#include <iostream>
#include <string>
#include "Hyper.h"


int main(int argc, char* argv[]) {
    if (argc > 2) {
        std::cerr << "Usage: hyper [script]" << std::endl;
        std::exit(64); // following convention laid out in sysexits.h
    }

    Hyper hyper;
    int status = 0;
    if (argc == 2) {
        std::string scriptName = argv[1];
        status = hyper.runScript(scriptName);
    }
    else {
        hyper.runPrompt();
    }

    return status;
}
