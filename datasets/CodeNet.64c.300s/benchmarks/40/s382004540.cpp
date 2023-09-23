#include <iostream>
#include <ctype.h>
#include <string>

int main (int argc, char *argv[])
{
	std::string str;
	getline(std::cin, str);
	for(int i = 0; i < (int)str.size(); ++i)
	{
		if(islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}
	std::cout << str << std::endl;
	
	return 0;
}