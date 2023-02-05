#include "../../include/Lexer/Lexer.h"
#include <regex>

namespace Lexer
{
	Lexer::Lexer(std::string srcFile)
	{
		fileData = readFile(srcFile);
		tokens = split();
	}

	std::vector<std::string> Lexer::split()
	{
		std::regex regexz("[';]");
		std::sregex_token_iterator iter(fileData.begin(), fileData.end(), regexz, -1);
		std::sregex_token_iterator end;
		return { iter, end };
	}

	Lexer::~Lexer()
	{
		
	}
}