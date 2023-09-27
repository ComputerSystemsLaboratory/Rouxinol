#include <bits/stdc++.h>
using namespace std;

int LCS(const string &a, const string &b) {
	vector<vector<int>> dp(a.size() + 1, vector<int>(b.size() + 1, 0));
	for (int i = 0; i <= a.size(); i++) {
		for (int j = 0; j <= b.size(); j++) {
			if (i > 0 && j > 0) {
				if (a[i - 1] == b[j - 1]) {
					dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
				}
				else {
					dp[i][j] = max(dp[i][j], dp[i - 1][j - 1]);
				}
				dp[i][j] = max(dp[i][j], dp[i][j - 1]);
				dp[i][j] = max(dp[i][j], dp[i - 1][j]);
			}
			else if (i > 0) {
				dp[i][j] = max(dp[i][j], dp[i - 1][j]);
			}
			else if (j > 0) {
				dp[i][j] = max(dp[i][j], dp[i][j - 1]);
			}
		}
	}
	return dp[a.size()][b.size()];
}

int main()
{
	int n;
	string X, Y;
	cin >> n;
	while (n--) {
		cin >> X >> Y;
		cout << LCS(X, Y) << endl;
	}
	return 0;
}