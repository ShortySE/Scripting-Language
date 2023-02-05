#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Utils.h"

namespace Lexer
{
	class Lexer
	{
		public:
			Lexer(std::string srcFile);
			std::vector<std::string> getTokens() { return tokens; }
			~Lexer();

		private:
			std::vector<std::string> tokens;
			std::string fileData;

		private:
			std::vector<std::string> split();
	};
}