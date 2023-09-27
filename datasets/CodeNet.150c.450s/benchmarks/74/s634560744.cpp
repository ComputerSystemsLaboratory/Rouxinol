#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> c(m);
	vector<int> dp(n+1);
	for (int i = 0; i < n+1; i++) {
		dp[i] = i;
	}
	for (int i = 0; i < m; i++) {
		cin >> c[i];
		dp[c[i]] = 1;
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j > i-j) {
				break;
			}
			dp[i] = min(dp[i], dp[j]+dp[i-j]);
		}
	}
	cout << dp[n] << endl;
	return 0;
}