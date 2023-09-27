#include <iostream>
#include <cstdint>

int main()
{
	std::uint32_t n;
	std::cin >> n;
	for (std::uint32_t i = 0; i < n; ++i) {
		double x1, y1, x2, y2, x3, y3, x4, y4;
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		if ((x1 - x2) * (y3 - y4) - (x3 - x4) * (y1 - y2) != 0.0) {
			std::cout << "NO" << std::endl;
		}
		else {
			std::cout << "YES" << std::endl;
		}
	}
	return 0;
}