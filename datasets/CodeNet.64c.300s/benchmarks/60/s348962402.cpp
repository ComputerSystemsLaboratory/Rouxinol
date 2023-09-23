#include <iostream>

using namespace std;

int main() {

	int a, b;

	while (cin >> a >> b, a != 0 && b != 0) {

		int dp[17][17] = { 0 };
		int n;

		cin >> n;

		dp[1][1] = 1;

		for (int i = 1; i <= n; i++) {
			int x, y;
			cin >> x >> y;
			dp[x][y] = -1;
		}

		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {

				if (dp[i][j] != -1) {
					if (j != 1 && dp[i][j - 1] != -1) {
						dp[i][j] += dp[i][j - 1];
					}

					if (i != 1 && dp[i - 1][j] != -1) {
						dp[i][j] += dp[i - 1][j];
					}
				}
			}
		}

		cout << dp[a][b] << endl;
	}

	return 0;

}
