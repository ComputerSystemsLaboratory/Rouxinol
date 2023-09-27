#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
	double m = 100;
	int n;

	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		m *= 1.05;
		m = std::ceil(m);
	}
	std::cout << std::fixed << std::setprecision(0) << m * 1000 << std::endl;
	return 0;
}