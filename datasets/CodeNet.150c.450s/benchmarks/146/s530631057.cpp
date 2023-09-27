#include<iostream>
#include<cmath>

int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		long double x1, y1, x2, y2, x3, y3, x4, y4, ax, ay, bx, by;
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		ax = x1 - x2; ay = y1 - y2;
		bx = x3 - x4; by = y3 - y4;
		if (std::abs(ax*by - ay*bx) < 0.00000000000000000000000000000001) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
	}

	return 0;
}