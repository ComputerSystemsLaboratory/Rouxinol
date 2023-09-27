#include <iostream>

int solve(int a, int b, int c) {
	int n = 0;
	for (int x = a; x <= b; ++x) {
		if (c % x == 0)
			++n;
	}
	return n;
}

int main(void) {
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout << solve(a, b, c) << std::endl;
	return 0;
}