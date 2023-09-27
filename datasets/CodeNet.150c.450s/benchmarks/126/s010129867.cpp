#include <iostream>
#include <cstring>

constexpr int MaxAB = 16;
int dp[MaxAB][MaxAB];

bool isObstacle[MaxAB][MaxAB];

int main() {
	int a, b, n;
	while (std::cin >> a >> b, a + b) {
		std::cin >> n;

		for (int i = 0; i < n; ++i) {
			int x, y;
			std::cin >> x >> y;
			isObstacle[x - 1][y - 1] = true;
		}

		dp[0][0] = 1;
		for (int i = 0; i < a; ++i) {
			for (int j = 0; j < b; ++j) {
				if ((i == 0 && j == 0) || isObstacle[i][j])
					continue;

				dp[i][j] = (
					i == 0 ? dp[i][j - 1]
					: j == 0 ? dp[i - 1][j]
					: dp[i - 1][j] + dp[i][j - 1]
					);
			}
		}

		std::cout << dp[a - 1][b - 1] << std::endl;
        
        std::memset(dp, 0, sizeof(dp));
        std::memset(isObstacle, 0, sizeof(isObstacle));
	}
}