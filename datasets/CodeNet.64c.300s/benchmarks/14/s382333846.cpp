#include <iostream>
int main() {
	int x, y;
	std::cin >> x >> y;
	if (x > y)
		std::cout << "a > b" << std::endl;
	else if (x == y)
		std::cout << "a == b" << std::endl;
	else
		std::cout << "a < b" << std::endl;
	return 0;
}