#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const* argv[])
{
	int w,h,x,y,r;
	std::cin >> w>> h>> x>> y>> r;
	if (x - r >= 0 &&
		x + r <= w &&
		y - r >= 0 &&
		y + r <= h   ) {
		std::cout << "Yes" ;
	} else {
		std::cout << "No" ;
	}
	std::cout << std::endl ;
	return 0;
}