#include "ShellInterpreter.h"
#include "LsCommand.h"
#include <iostream>

bool CShellInterpreter::interpret(const std::string& input) {
    if (input == "exit") {
        exit(0);
    }
    else if (input == "ls") {
        LsCommand ls;
        ls.run(); 
        return true;
    }
    else {
        std::cout << "Command not found.\n";
        return false;
    }
}
