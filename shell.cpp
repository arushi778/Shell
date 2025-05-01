
#include "Shell.h"
#include "ShellEnv.h"
#include <iostream>

namespace MyShell {
	void CShell::run() {
		ShellEnv::getInstance().setCurrentPath(".");
		loop();
	}

	void CShell::loop() {
		std::string command;

		while (true) {
			std::cout << "$ ";
			std::getline(std::cin, command);

			if (command.empty()) {
				continue;
			}

			if (!m_Interpreter.interpret(command)) {
				std::cerr << "Error interpreting command.\n";
			}
		}
	}
}



