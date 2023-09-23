#include <iostream>

int main(int argc, char *argv[]) {
	int a, b;
	char o;
	std::cin >> a >> b;
	if (a > b) std::cout << "a > b" << std::endl;
	else if (a < b) std::cout << "a < b" << std::endl;
	else std::cout << "a == b" << std::endl;
	return 0;
}