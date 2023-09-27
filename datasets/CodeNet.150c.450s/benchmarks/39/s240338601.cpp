#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;
	const int s = a * b, l = 2 * (a + b);
	std::cout << s << ' ' << l << std::endl;
	return 0;
}