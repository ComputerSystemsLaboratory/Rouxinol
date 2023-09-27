#include <iostream>

int main()
{
	int x, y;
	std::cin >> x >> y;

	while (x != 0 || y != 0) {
		if (x < y) {
			std::cout << x << " " << y << std::endl;
		}
		else {
			std::cout << y << " " << x << std::endl;
		}
		std::cin >> x >> y;
	}
}