// 2016-11-25
#include <iostream>

int main() {
	int n, m, p;
	int x[100];
	int s;
	float a;
	std::cin >> n >> m >> p;
	while (n || m || p) {
		s = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> x[i];
			s += x[i];
		}
		if (x[m - 1] == 0) {
			std::cout << 0 << std::endl;
		} else {
			a = 100 * s;
			a *= (1.0 - 0.01 * p);
			a /= x[m - 1];
			std::cout << (int)a << std::endl;
		}
		std::cin >> n >> m >> p;
	}
	return 0;
}