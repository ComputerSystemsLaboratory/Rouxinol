#include <iostream>
#include <string>

int main (int argc, char *argv[])
{
	while(true)
	{
		std::string str;
		getline(std::cin, str);
		int sum = 0;
		for(int i = 0; i < (int)str.size(); ++i)
		{
			sum += str[i] - '0';
		}
		if(sum != 0)
		{
			std::cout << sum << std::endl;
		}
		else
		{
			break;
		}
	}
	
	return 0;
}