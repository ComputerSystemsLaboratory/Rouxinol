#include<iostream>

int main()
{
	int x, y;
	while (1) {
		std::cin >> x >> y;
		if (x == 0 && y == 0)break;

		if (x > y) {
			int t = x;
			x = y;
			y = t;
		}

		std::cout << x  << " " << y << std::endl;
	}
}