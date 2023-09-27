#include <iostream>
#include <string>

int main(int argc, char** argv)
{
	std::string str;
	if (std::getline(std::cin, str))
	{
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] += ('A' - 'a');
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] -= ('A' - 'a');
			}
		}
	}

	std::cout << str << std::endl;

	return 0;
}
