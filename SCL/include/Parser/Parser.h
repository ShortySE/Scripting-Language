#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Commands.h"

namespace Parser
{
	class Parser
	{
		public:
			Parser(std::vector<std::string> tokens);
			~Parser();

		private:
			std::vector<std::string> toks;
			int index = 0;
			std::string command;
			std::string cdCommand;
			void advance();
			void parse();
	};
}