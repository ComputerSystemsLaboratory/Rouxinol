#include <iostream>
#include <string>

int main(void)
{
	std::string str;
	std::cin >> str;
	std::string reverce;

	for (auto s : str)
	{
		reverce = s + reverce;
	}
	std::cout << reverce << std::endl;

	return 0;
}