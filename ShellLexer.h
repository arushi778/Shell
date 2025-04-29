#ifndef __SHELL_LEXER_H__
#define __SHELL_LEXER_H__

#include "ShellCommandSyntax.h"


// Shell Lexer, creates command tokens and sends them to the syntax analyser
// Once the syntax is correct
// You need rules for creation of tokens, 
// may need more classes to write a full lexer for what you want to support
// For instance - "cp -r /home/user /home/user2"
// What are the tokens here ? cp - r /home/user /home/user2. 
// Should - and r be separate tokens or single token ?
// Also, you can consider these high level modules into their own libraries or in their own folders
// This ways things will be segregated otherwise there will be a list of 10's of files.
// Design decisions you will take yourself. As you move, there will be a lot of decision, 
// feel free to decide after reading. There is a possiblity that some rework happen later
// because you will think, a different design is better. 
// This is normal and dont be afraid of changing the design.
class CShellLexer
{

//private:
//	
//	// You need to decide if you want to call the syntax analysis from lexer
//	// or you return the tokens from lexer and do the syntax analysis in the interpreter
//	CShellCommandSyntax* Syntax;
//
//
//public:
//	CShellLexer(CShellCommandSyntax* syntax);
//	~CShellLexer();
//
//	// Tokenize the command and send it to the syntax analyser
//	// returns tokens in the tokens string
//	SHELL_ERRORS tokenize(const std::string& command, std::string& tokens);
public:
	std::vector<std::string> tokenize(std::string input);
};

#endif	/* __SHELL_LEXER_H__ */
