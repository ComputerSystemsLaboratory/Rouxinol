#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 1010;

int main() {
    string s, t;
	cin >> s >> t;
	
	const int n = s.length();
	const int m = t.length();
	
	int dp[MAX][MAX] = {};
	for (int i = 0; i < MAX; i++) {
		dp[i][0] = dp[0][i] = i;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (s[i] == t[j]) {
				dp[i + 1][j + 1] = min({dp[i][j], dp[i + 1][j] + 1, dp[i][j + 1] + 1});
			} else {
				dp[i + 1][j + 1] = min({dp[i][j] + 1, dp[i + 1][j] + 1, dp[i][j + 1] + 1});
			}
		}
	}
	
	cout << dp[n][m] << '\n';
	
	return 0;
}
