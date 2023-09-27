#include <iostream>

template<typename X>
X input() {
	X value;
	std::cin >> value;
	return value;
}

int main() {
	int x = input<int>();
	int x3 = x * x * x;
	std::cout << x3 << std::endl;

	return 0;
}