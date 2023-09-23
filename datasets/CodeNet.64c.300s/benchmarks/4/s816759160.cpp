#include <iostream>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << (a < b && b < c ? "Yes" : "No") << std::endl;
}