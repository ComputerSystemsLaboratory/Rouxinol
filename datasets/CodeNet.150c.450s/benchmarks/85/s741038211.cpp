#include <iostream>
#include <limits.h>

using namespace std;

int dp[100][100];
int p[101];
int n;

void solve() {
	for (int m = n; m > 0; m--) {
		for (int t = 0, i = 0, j = n - m + 1; t < n && j < n; t++) {
			dp[i][j] = INT_MAX;
			for (int k = i; k < j; k++) {
				int temp = dp[i][k] + dp[k + 1][j] + p[i] * p[k + 1] * p[j + 1];
				if (temp < dp[i][j]) {
					dp[i][j] = temp;
				}
			}
			i++;
			j++;
		}
	}
}

int main() {
	int a, b;
	cin >> n >> a;

	p[0] = a;
	for (int i = 1; i < n; i++) {
		cin >> a >> b;
		p[i] = a;
	}
	cin >> a;
	p[n] = a;

	solve();
	cout << dp[0][n - 1] << endl;

	return 0;
}