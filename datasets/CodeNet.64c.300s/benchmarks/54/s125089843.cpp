#include <iostream>
using namespace std;
long long n, dp[105][25] = { 0 }, a[105] = { 0 };
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	dp[0][a[0]] = 1;
	for (int i = 1; i <= n - 2; i++) {
		for (int j = 0; j <= 20; j++) {
			if (j-a[i]<0) {
				dp[i][j] = dp[i - 1][j + a[i]];
			}
			else if (j + a[i] > 20) {
				dp[i][j] = dp[i - 1][j - a[i]];
			}
			else {
				dp[i][j] = dp[i - 1][j - a[i]] + dp[i - 1][j + a[i]];
			}
		}
	}
	cout << dp[n - 2][a[n - 1]] << endl;
	return 0;
}