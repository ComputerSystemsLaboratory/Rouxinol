#include <iostream>

int main(int argc, char const* argv[])
{
	int W, H, x, y, r;

	std::cin >> W >> H >> x >> y >> r;

	if (x >= r && x + r <= W && y >= r && y + r <= H)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
}