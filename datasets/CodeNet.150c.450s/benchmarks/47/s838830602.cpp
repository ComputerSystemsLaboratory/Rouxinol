#include <iostream>
#include <algorithm>
#include <vector>

int main ()
{
	int w, h, x, y, r;
	std::cin >> w >> h >> x >> y >> r;

	bool a = (0 <= x - r) && (x + r <= w);
	bool b = (0 <= y - r) && (y + r <= h);
	if (a && b)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
}