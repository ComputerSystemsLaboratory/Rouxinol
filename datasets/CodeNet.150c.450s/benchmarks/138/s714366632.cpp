#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;

	while (a != 0 && b != 0)
		a > b ? a %= b : b %= a;

	std::cout << (a == 0 ? b : a) << std::endl;
}