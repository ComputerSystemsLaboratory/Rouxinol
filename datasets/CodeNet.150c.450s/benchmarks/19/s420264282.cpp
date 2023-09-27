#include <iostream>

int main(int argc, char *argv[]) {
	int x, y, t;
	while (std::cin >> x >> y) {
		if (x == 0 && y == 0) break;
		if (x > y) {
			t = x;
			x = y;
			y = t;
		}
		std::cout << x << " " << y << std::endl;
	}
	return 0;
}