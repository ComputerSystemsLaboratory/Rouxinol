#include <iostream>
int main() {
	int w, h, x, y, r;
	std::cin >> w >> h >> x >> y >> r;
	if (w >= x + r && h >= y + r && x + r > 0 && y + r > 0) {
		std::cout << "Yes" << std::endl;
	}
	else {
		std::cout << "No" << std::endl;
	}
	return 0;
}
