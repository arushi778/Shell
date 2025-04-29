#include<iostream>
#include<vector>
#include<sstream>
#include "ShellLexer.h"

std::vector<std::string> tokenize(std::string input)
{
	std::stringstream ss(input);
	std::string token;
	std::vector<std::string> tokens;

	while (ss >> token)
	{
		tokens.push_back(token);
	}
	return tokens;
}
