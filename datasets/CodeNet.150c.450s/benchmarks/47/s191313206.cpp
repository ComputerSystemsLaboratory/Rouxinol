#include <iostream>

bool isInside(int w, int h, int x, int y, int r) {
	return !(x - r < 0 || x + r > w || y - r < 0 || y + r > h);
}

int main(void) {
	int w, h, x, y, r;
	std::cin >> w >> h >> x >> y >> r;
	std::cout << (isInside(w, h, x, y, r) ? "Yes" : "No") << std::endl;
	return 0;
}