#include <iostream>
#include <algorithm>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	if(a > b) {
		std::swap(a, b);
	}

	if(b > c) {
		std::swap(b, c);
	}

	if(a > b) {
		std::swap(a, b);
	}

	std::cout << a << ' ' << b << ' ' << c << std::endl;

	return 0;
}