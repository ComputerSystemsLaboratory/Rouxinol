#include <iostream>
using namespace std;
int main() {
	while (1) {
		int n, k, a[100005] = { 0 }, m = -9999999, dp[100005] = { 0 };
		cin >> n >> k;
		if (n == 0 && k == 0) return 0;
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < k; i++) {
			dp[0] += a[i];
		}
		for (int i = 1; i < n - k + 2; i++) {
			dp[i] = dp[i - 1] - a[i - 1] + a[i + k - 1];
		}
		for (int i = 0; i < n - k + 1; i++) {
			//cout << dp[i] << endl;
			if (m < dp[i]) m = dp[i];
		}
		cout << m << endl;
	}
	return 0;
}