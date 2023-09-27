#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		string S, T;
		cin >> S >> T;
		int s = S.size(), t = T.size();
		int dp[1010][1010] = { 0 };
		for (int i = 0; i < s; i++) {
			for (int j = 0; j < t; j++) {
				if (S[i] == T[j]) {
					dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
				}
				dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j + 1]);
				dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i + 1][j]);
			}
		}
		cout << dp[s][t] << endl;
	}
}
