#include <iostream>

using namespace std;

int main() {
	int n, v;
	long long dp[100][21] = { 0 };
	cin >> n >> v;
	dp[0][v] = 1;
	for (int i = 1; i < n - 1; i++) {
		cin >> v;
		for (int j = 0; j <= 20; j++) {
			if (j + v <= 20) {
				dp[i][j + v] += dp[i - 1][j];
			}
			if (j - v >= 0) {
				dp[i][j - v] += dp[i - 1][j];
			}
		}
	}
	cin >> v;
	cout << dp[n - 2][v] << endl;

	return 0;
}