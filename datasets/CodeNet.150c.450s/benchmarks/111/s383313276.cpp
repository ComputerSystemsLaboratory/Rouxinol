#include <iostream>
#include <cstdint>

std::int64_t dp[99][21];

int main() {
	int n;
	std::cin >> n;

	int head;
	std::cin >> head;
	dp[0][head] = 1;

	for (int i = 1; i < n - 1; ++i) {
		int a;
		std::cin >> a;
		for (int j = 0; j < 21; ++j) {
			if (dp[i - 1][j] == 0)
				continue;
			if (j + a <= 20)
				dp[i][j + a] += dp[i - 1][j];
			if (j - a >= 0)
				dp[i][j - a] += dp[i - 1][j];
		}
	}

	int tail;
	std::cin >> tail;
	std::cout << dp[n - 2][tail] << std::endl;
}