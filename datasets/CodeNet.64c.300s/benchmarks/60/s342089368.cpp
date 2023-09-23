#include <iostream>
using namespace std;
int main() {
	while (1) {
		bool bo[30][30] = { false };
		int a, b, dp[30][30] = { 0 };
		int n;
		cin >> a >> b;
		if (a == 0 && b == 0) return 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			bo[x][y] = true;
		}
		dp[1][0] = 1;
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				if (bo[i][j]) dp[i][j] = 0;
				else dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
		cout << dp[a][b] << endl;
	}
	return 0;
}