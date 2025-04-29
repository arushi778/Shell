
// class CShell
// Shell class having a loop for taking user input
// Sends to interpreter and gets ready to pick next user command quickly

#include "shell.h"
#include "CommonHeaders.h"

namespace MyShell
{
	void CShell::run()
	{
		env.setCurrPath("c:\user\<current user>");
		env.setCurrPath(path)
		loop(path);
	}

	void CShell::loop(std::string path)
	{
		std::string command;
		while (true)
		{
			std::cout << "$ ";
			std::getline(std::cin, command);
			if (command.empty())
			{
				continue;
			}

			if (m_Interpreter.interpret(command, path) == ERROR)
			{
				// print error;
				continue;
			}
			LsCommand ls = new LsCommand();
			ls.run();
			
		}
	}
};

//namespace MyShell
//{
	//void CShell::run()
	//{
	//	// calls loop here after doing certain quick checks
	//	// Should not take much time and a lot of logic should not be present in this class
	//	loop();
	//}

	//void CShell::loop()
	//{
	//	std::string command;
	//	while (true) //!std::getline(std::cin, command)
	//	{
			// Show prompt here
			// Like [bash]$ "you write the command after the prompt"
			/*std::cout<<"$";
			getline(std::cin,command);
			if(command=="exit")
			{
				break;
			}*/
			// interpreter -> lexer -> syntax analysis -> syntactical analysis -> execute
			// or lexer -> parser (syntax tree, abstract syntax tree) -> interpreter -> execute
			// ##	##
			// ## NOTE: TODO://	##
			// ## There will be a thread class somewhere in between ##
			// ## to take care of background running of commands ##
			// ## Start reading about C++11 threads/pthreads; ##
			// ##	##
			// These are some design decisions you will take.
			// send the command to the interpreter
			// See how you do the error handling if interpreter returns an error
			// interpreter will do the job of parsing, syntax and syntactical analysis
			// Important to note here 
			// If you are supporting backgroun runs of commands, this means the command will end with a &
			// In that case, the shell should not block and returns immidiately
			// And the command keep executing in the background
			// If the command is not to run in backgroun, which means not ending in &
			// , then the shell should block and only return after the command finishes
			// Do this in syntax analysis, return if command to run in backgroun, dont do any other analysis on it.
			// Because we want to block the shell for as less as possible if the command is to run in background
			//m_Interpreter.interpret(command);

			// After this you are ready to ingest another command from user;
	/*	}
	}*/

//} // namespace MyShell