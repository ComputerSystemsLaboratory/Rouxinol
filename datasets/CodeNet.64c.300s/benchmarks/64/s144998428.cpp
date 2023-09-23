#include <iostream>

template< typename Type >
Type input() {
	Type value;
	std::cin >> value;
	return value;
}

template< typename Type >
Type gcd(Type x, Type y) {

	// x >= y ????????????
	if( x < y ) std::swap(x, y);

	while(0 < y) {
		Type r = x % y;
		x = y;
		y = r;
	}

	return x;
}

int main() {
	// 1 <= x,y <= 10^9 ?????????????????´??°
	int x = input<int>();
	int y = input<int>();

	std::cout << gcd(x,y) << std::endl;

	return 0;
}