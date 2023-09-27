#include <iostream>
using namespace std;

int dp[1000010];
int dp2[1000010];

inline int tetnum(int n) {
	return n * (n + 1) * (n + 2) / 6;
}

int main () {
	dp[0] = 0;
	fill(dp, dp + 1000010, 0x7ffffff);
	fill(dp2, dp2 + 1000010, 0x7ffffff);
	for (int i = 0; tetnum(i) < 1000010; i++) dp[tetnum(i)] = 1;
	for (int i = 0; tetnum(i) < 1000010; i++) {
		if (tetnum(i) & 1) dp2[tetnum(i)] = 1;
	}
	for (int i = 1; i <= 1000010; i++) {
		for (int j = 0; i - tetnum(j) > 0; j++) {
			dp[i] = min(dp[i], dp[i - tetnum(j)] + 1);
			if (tetnum(j) & 1) {
				dp2[i] = min(dp2[i], dp2[i - tetnum(j)] + 1);
			}
		}
	}
	int n;
	while (cin >> n, n) {
		cout << dp[n] << ' ' << dp2[n] << endl;
	}
	return 0;
}