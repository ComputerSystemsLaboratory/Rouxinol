#include <iostream>

int main() {
	int m, n, a, b, c, d;

	while (std::cin >> n) {
		m = 0;
		for (a = 0; a <= 9; ++a) {
			for (b = 0; b <= 9; ++b) {
				for (c = 0; c <= 9; ++c) {
					for (d = 0; d <= 9; ++d) {
						if (a + b + c + d == n) {
							++m;
						}
					}
				}
			}
		}
		std::cout << m << std::endl;
	}
	return 0;
}