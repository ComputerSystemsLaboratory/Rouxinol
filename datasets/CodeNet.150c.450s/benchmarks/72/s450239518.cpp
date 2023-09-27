#include "ctype.h"
#include <iostream>
#include <string>

int main(int argc, char const* argv[])
{
	std::string str;
	int i = 0;

	std::getline(std::cin, str);

	for (size_t i = 0; i < str.size(); i++)
	{
		if (isupper(str[i]))
		{
			str[i] = tolower(str[i]);
			std::cout <<  str[i];
		}
		else if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
			std::cout << str[i];
		}
		else
			std::cout << str[i];
	}

	std::cout << std::endl;
	return 0;
}