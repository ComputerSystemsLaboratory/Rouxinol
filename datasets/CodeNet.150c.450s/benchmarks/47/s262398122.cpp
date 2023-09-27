#include <iostream>

int main(int argc, char *argv[]) {
	int w, h, x, y, r;
	std::cin >> w >> h >> x >> y >> r;

	if (x < r || x > w - r || y < r || y > h - r) {
		std::cout << "No" << std::endl;
	} else {
		std::cout << "Yes" << std::endl;
	}

	return 0;
}