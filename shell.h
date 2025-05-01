

#pragma once
#include <string>
#include "ShellInterpreter.h"

namespace MyShell {
    class CShell {
    public:
        void run();
    private:
        void loop();
        CShellInterpreter m_Interpreter;
    };
}

