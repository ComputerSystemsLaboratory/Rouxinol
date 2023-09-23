#include <iostream>
#include <cmath>

bool isPrime(int x) {

	if (x == 2) {
		return true;
	}
	if (x % 2 == 0) {
		return false;
	}

	for (int i = 3; i <= std::sqrt(x); i += 2) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	int n;
	std::cin >> n;

	int cnt = 0;

	for (int i = 0; i < n; ++i) {
		int m;
		std::cin >> m;
		if (isPrime(m)) {
			++cnt;
		}
	}

	std::cout << cnt << std::endl;

	return 0;
}