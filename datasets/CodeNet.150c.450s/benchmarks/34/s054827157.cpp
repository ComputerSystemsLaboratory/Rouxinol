#include <iostream>
using namespace std;
long long dp[10000][10000] = { 0 }, cnt = 0;
int main() {
	while (1) {
		cnt = 0;
		int n;
		cin >> n;
		if (n == 0) return 0;
		dp[0][0] = 1;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i - 3 >= 0) dp[i][j] = dp[i - 1][j - 1] + dp[i - 2][j - 1] + dp[i - 3][j - 1];
				else if (i - 2 >= 0) dp[i][j] = dp[i - 1][j - 1] + dp[i - 2][j - 1];
				else dp[i][j] = dp[i - 1][j - 1];
			}
		}
		for (int i = 1; i <= 30; i++) {
			cnt += dp[n][i];
		}
		//cout << cnt << endl;
		if (cnt % 10) {
			cnt = cnt / 10 + 1;
		}
		else cnt /= 10;
		if (cnt % 365 == 0) cout << cnt / 365 << endl;
		else cout << cnt / 365 + 1 << endl;
	}
	return 0;
}