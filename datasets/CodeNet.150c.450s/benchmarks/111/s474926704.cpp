#include<iostream>
using namespace std;

int main() {
	int a[100];
	long long dp[100][21] = {};
	int n;
	cin >> n;
	for (int i = 0;i < n-1;i++)cin >> a[i];
	int s;
	cin >> s;

	dp[0][a[0]]++;
	for (int i = 1;i < n;i++) {
		for (int j = 0;j <= 20;j++) {
			if (dp[i - 1][j] != 0) {
				if (j + a[i] >= 0 && j + a[i] <= 20) {
					dp[i][j + a[i]] += dp[i - 1][j];
				}
				if (j - a[i] >= 0 && j - a[i] <= 20) {
					dp[i][j - a[i]] += dp[i - 1][j];
				}
			}
		}
	}
	cout << dp[n - 2][s] << endl;
	getchar();
	getchar();
}