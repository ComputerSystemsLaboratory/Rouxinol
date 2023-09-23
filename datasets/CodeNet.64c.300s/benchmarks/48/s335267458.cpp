#include <iostream>
#include <algorithm>

bool sieve[1000000];

int main() {
	int n;

	sieve[0] = true;
	sieve[1] = true;

	while (std::cin >> n) {
		if (n <= 1) {
			std::cout << 0 << std::endl;
			continue;
		}

		for (int i = 2; i*i <= n; ++i) {
			if (!sieve[i]) {
				for (int j = i + i; j <= n; j += i)
					sieve[j] = true;
			}
		}

		std::cout << std::count(sieve, sieve + n + 1, false) << std::endl;
	}
}