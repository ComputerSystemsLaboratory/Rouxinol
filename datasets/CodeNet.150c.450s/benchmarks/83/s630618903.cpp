#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
using namespace std;
int dp[101][10001], w[101], v[101], n;
int main() {
	int W;
	cin >> n;
	cin >> W;
	for (int i = 1; i <= n; i++) {
		cin >> v[i] >> w[i];
	}
	for (int i = 0; i <= n; i++) dp[i][0] = 0;
	for (int j = 0; j <= W; j++) dp[0][j] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= W; j++) {
			if (w[i + 1] > j) dp[i + 1][j] = dp[i][j];
			else dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i + 1]] + v[i + 1]);
		}
	}
	cout << dp[n][W] << endl;
	return 0;
}