
// main.cpp
// Main class, contains the main function and starts the shell

#include "Shell.h"
#include "LsCommand.h"
#include<iostream>
#include<iostream>
#include "ShellInterpreter.h"

//
// The code is not going to compile. This is just a high level design/framework
// Concrete classes needs to be done better with a design
// And not necessarily with just one class.
// For instance, lexer.cpp is going to have more support classes
// to write a rule based lexer. 
// You need to read and come up with a standard design for all these specific problems
// This will teach you the domain of how to write shell, interpreters but also design patterns.
//int main(int argc, char* argv[])
//{
//	MyShell::CShell shell;
//	shell.run();
//	return 0;
//}

int main(int argc, char* argv[])
{
	MyShell::CShell shell;
	//shell.run();

	std::string path = (argc > 1) ? argv[1] : ".";
	shell.run();
	return 0;

}
