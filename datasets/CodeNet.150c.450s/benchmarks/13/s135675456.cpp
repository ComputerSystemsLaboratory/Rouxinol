#include <iostream>

int main()
{
	std::string s, p;
	std::cin >> s >> p;
	if ((s+s).find(p) != std::string::npos) {
		std::cout << "Yes" << std::endl;
	} else {
		std::cout << "No" << std::endl;
	}
	return 0;
}