#include <iostream>
using namespace std;

int main() {
	int n, a[100], i, j;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long dp[100][21] = {};
	dp[0][a[0]] = 1;
	for (i = 1; i < n - 1; i++) {
		for (j = 0; j < 21; j++) {
			if (j - a[i] >= 0)
				dp[i][j] += dp[i - 1][j - a[i]];
			if (j + a[i] < 21)
				dp[i][j] += dp[i - 1][j + a[i]];
		}
	}
	cout << dp[n-2][a[n-1]] << endl;
}