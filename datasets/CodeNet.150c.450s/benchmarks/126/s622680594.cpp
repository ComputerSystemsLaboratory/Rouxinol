#include <bits/stdc++.h>
using namespace std;

int main() {
	bool judge = true;
	while (judge) {
		int a, b, n;
		cin >> a >> b >> n;
		if (a == 0 && b == 0) {
			judge = false;
			return 0;
		}
		int x[n], y[n];
		for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
		char p[20][20];
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				p[i][j] = '.';
			}
		}
		for (int i = 0; i < n; i++) {
			p[x[i] - 1][y[i] - 1] = '#';
		}
		int dp[20][20] = { 0 };
		dp[0][0] = 1;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				if (i != a - 1) {
					if (p[i + 1][j] == '.') {
						dp[i + 1][j] += dp[i][j];
					}
				}
				if (j != b - 1) {
					if (p[i][j + 1] == '.') {
						dp[i][j + 1] += dp[i][j];
					}
				}
			}
		}
		cout << dp[a - 1][b - 1] << endl;
	}
}
