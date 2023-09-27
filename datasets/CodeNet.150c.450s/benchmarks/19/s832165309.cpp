#include <iostream>

int main(void)
{
	int x, y;
	std::cin >> x >> y;
	while (x != 0 || y != 0) {
		if (x > y) {
			std::cout << y << " " << x << std::endl;
		}
		else {
			std::cout << x << " " << y << std::endl;
		}
		std::cin >> x >> y;
	}
	return 0;
}