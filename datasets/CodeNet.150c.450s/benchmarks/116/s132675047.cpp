#include <iostream>
#include <cstdint>
#include <algorithm>
#include <cstring>

std::int64_t a[100000];

int main() {
	int n, k;
	while (std::cin >> n >> k, n + k != 0) {
		for (int i = 0; i < n; ++i)
			std::cin >> a[i];

		std::int64_t res = 0, mem = 0;
		for (int i = 0; i < n; ++i) {
			mem += a[i];

			if (i >= k) {
				mem -= a[i - k];
				res = std::max(res, mem);
			}
		}

		std::cout << res << std::endl;
	}
}