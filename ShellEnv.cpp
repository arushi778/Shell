// class CShellEnv
// Saves and process environment variables for the shell
// Can be used to save and restore the environment variables
// use the command lets say, set varname=value on the shell prompt
#include<iostream>
#include<filesystem>
#include "ShellEnv.h"


std::string CShellEnv:: getCurrentDirectory()
{
	return std::filesystem::current_path().string();
}