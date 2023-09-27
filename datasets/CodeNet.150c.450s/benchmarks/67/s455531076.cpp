// 2016-11-25
#include <iostream>

int main() {
	int n;
	int h, s, c;
	while (true) {
		std::cin >> n;
		if (n == 0) {
			break;
		}
		h = 1;
		s = 0;
		c = 0;
		for (int i = 1; i < n + 1; i++) {
			while (s >= n) {
				if (s == n) {
					c++;
				}
				s -= h;
				h++;
			}
			s += i;
		}
		std::cout << c << std::endl;
	}
	return 0;
}