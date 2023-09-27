#include<iostream>
#include<string>

int main()
{
	std::string str;
	std::cin >> str;
	for (auto e = str.rbegin(); e < str.rend(); ++e)
		std::cout << *e;
	std::cout << std::endl;

	return 0;
}
