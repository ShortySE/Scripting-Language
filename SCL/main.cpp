#include <iostream>
#include "include/Lexer/Lexer.h"
#include "include/Parser/Parser.h"

int main(int argc, char** argv[])
{
	Lexer::Lexer* lexer = new Lexer::Lexer("Tests/test.scl");

	Parser::Parser* parser = new Parser::Parser(lexer->getTokens());

	return 0;
}