#include <iostream>
#include <string>

int main(int argc, char const* argv[])
{
	std::string s;
	std::string p;

	std::cin >> s >> p;
	s += s;

	if(s.find(p) == -1)
		std::cout << "No" << std::endl;
	else
		std::cout << "Yes" << std::endl;

	return 0;
}