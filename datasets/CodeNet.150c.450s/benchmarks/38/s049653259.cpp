#include <algorithm>
#include <cmath>
#include <iostream>

int pow2(int i) {
	return std::pow(i, (double) 2);
}

int main() {
	int n;
	std::cin >> n;

	int in[3];
	for (int i = 0; i < n; i++) {
		std::cin >> in[0] >> in[1] >> in[2];
		std::sort(in, in + 3);
		if (pow2(in[2]) == pow2(in[0]) + pow2(in[1]))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
}