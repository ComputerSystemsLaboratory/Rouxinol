#include <iostream>

int main()
{
	int W, H, x, y, r;
	std::cin >> W >> H >> x >> y >> r;

	if (x <= 0 || y <= 0) {
		std::cout << "No" << std::endl;
	}
	else{
		if (x - r < 0  || x + r > W || y - r < 0 || y + r > H) {
			std::cout << "No" << std::endl;
		}
		else {
			std::cout << "Yes" << std::endl;
		}
	}
}