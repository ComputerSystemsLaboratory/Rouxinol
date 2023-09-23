#include<iostream>

int main()
{
	int W, H, x, y, r;
	std::cin >> W >> H >> x >> y >> r;

	if (x - r >= 0 && y - r >= 0) {
		if (x + r <= W && y + r <= H)
			std::cout << "Yes" << std::endl;
		else
			std::cout << "No" << std::endl;
	}

	else
		std::cout << "No" << std::endl;
}