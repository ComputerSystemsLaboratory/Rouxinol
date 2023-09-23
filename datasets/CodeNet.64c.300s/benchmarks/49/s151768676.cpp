#include <iostream>
#include <cmath>

int main() {
	int a, b;

	while (std::cin >> a >> b) {
		std::cout << static_cast<int>(std::log10(a + b)) + 1 << std::endl;
	}

	return 0;
}