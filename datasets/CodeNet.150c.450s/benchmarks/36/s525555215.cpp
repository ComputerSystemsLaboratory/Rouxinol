#include <iostream>

int integrateX2(int d) {
	static const int iBegin = 0, iEnd = 600;
	int sum = 0;
	for (int x = iBegin; x < iEnd; x += d) {
		sum += x * x * d;
	}
	return sum;
}

int main() {
	int d;
	while (std::cin >> d) {
		std::cout << integrateX2(d) << '\n';
	}
	return 0;
}