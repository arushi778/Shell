//#ifndef __ASHELL_SHELL_H
//#define __ASHELL_SHELL_H

// All your shell should be inside your namespace as to not conflict with any other shell
// This is a good practice to follow

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

//#endif	/* __ASHELL_SHELL_H */
