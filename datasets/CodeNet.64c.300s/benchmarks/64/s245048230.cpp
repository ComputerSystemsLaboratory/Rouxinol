#include <iostream>

int main() {

	int x, y;

	std::cin >> x >> y;
	if (y > x) {
		std::swap(x, y);
	}

	while (x && y) {
		int r = x % y;
		std::swap(x, y);
		std::swap(y, r);
	}
	std::cout << x << std::endl;

	return 0;
}