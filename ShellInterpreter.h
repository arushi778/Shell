//#ifndef __SHELL_INTERPRETER_H__
//#define __SHELL_INTERPRETER_H__
#pragma once

#include "CommonHeaders.h"
//#include "ShellErrors.h"

class CShellInterpreter
{
	public:
		void interpret(std::string input,std::string path);
};

//class CShellInterpreter
//{
//public:
//
//	SHELL_ERRORS interpret(const std::string& command);
//
//};
//
//#endif	/* __SHELL_INTERPRETER_H__ */
