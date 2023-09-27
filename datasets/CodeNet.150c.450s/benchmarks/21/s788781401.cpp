#include <iostream>

auto cube(int n) -> int {
	return n * n * n;
}

auto main() -> int {
	int n;
	std::cin >> n;
	std::cout << cube(n) << std::endl;
}