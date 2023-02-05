#include "../../include/Parser/Parser.h"

namespace Parser
{
	Parser::Parser(std::vector<std::string> tokens)
	{
		toks = tokens;
		this->advance();
	}

	void Parser::advance()
	{
		while (index < toks.size())
		{
			this->parse();
			index++;
		}
	}

	void Parser::parse()
	{
		Commands cmds;
		/*if (toks[index] == cmds.toDir)
		{
			command = "cd ";
			cdCommand = command + toks[index + 1];
			if (toks[index + 2] == cmds.createDir)
			{
				command = "mkdir ";
				command += toks[index + 3];

				system(cdCommand.c_str());
				system(command.c_str());
			}
		}*/

		if (toks[index] == cmds.writeLine)
		{
			command = "ECHO ";
			command += toks[index + 1];
			system(command.c_str());
		}

		else if (toks[index] == cmds.directory)
		{
			command = "dir";
			system(command.c_str());
		}
		
		else if (toks[index] == cmds.input)
		{
			command = "choice";
			system(command.c_str());
		}

		else if (toks[index] == cmds.date)
		{
			command = "DATE";
			system(command.c_str());
		}

		// Not functioning as of now
		else if (toks[index] == cmds.compile)
		{
			command = "cl /EHsc ";
			command += toks[index + 1];
			system(command.c_str());
		}

		else if (toks[index] == cmds.python)
		{
			command = "python ";
			command += toks[index + 1];
			system(command.c_str());
		}
	}

	Parser::~Parser()
	{
	}
}