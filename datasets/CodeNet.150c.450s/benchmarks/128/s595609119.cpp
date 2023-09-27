#include<iostream>
#include<string.h>
int main()
{
	char str[21];
	std::cin >> str;
	const int length = strlen(str);
	for(int i = length - 1; i >= 0; i--)
	{
		std::cout << str[i];
	}
	std::cout << std::endl;
	return 0;
}
