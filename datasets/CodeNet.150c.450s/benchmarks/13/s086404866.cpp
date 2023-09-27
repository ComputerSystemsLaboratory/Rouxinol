#include <iostream>
#include <cstring>
#include <string>



int main()
{
	std::string str1, str2;
	std::cin >> str1 >> str2;
	str1 += str1;
	
	if(std::strstr(str1.c_str(), str2.c_str()) == NULL)
	{
		std::cout << "No" << std::endl;
	}
	else
	{
		std::cout << "Yes" << std::endl;
	}


}