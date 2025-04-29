#include"LsCommand.h"
#include "ShellInterpreter.h"

void CShellInterpreter::interpret(std::string input,std::string path) {
    
    if (input == "exit") {
        exit(0);
    }
    else if (input == "ls") {
        LsCommand ls;
        ls.run(path);
    }
    else {
        std::cout << "Command not found.\n";
    }
}
