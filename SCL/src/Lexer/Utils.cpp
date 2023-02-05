#include "../../include/Lexer/Utils.h"

namespace Lexer
{
	std::string readFile(std::string fileName)
	{
		std::ifstream file(fileName);

		std::string line{};
		std::string source{};
		int index = 0;
		if (file.is_open())
		{
			std::cout << "file is open\n";
			while (file)
			{
				if(!file.good())
				{
					break;
				}

				std::getline(file, line);
				source += line;
			}
		}

		return source;
	}
}