#include<iostream>
#include<algorithm>
using namespace std;
typedef long long LL;

int main() {
	int n;
	while (cin >> n, n) {
		int k[5003];
		for (int i = 0;i < n;i++)cin >> k[i];

		int dp[5002];
		dp[0] = 0;
		for (int i = 1;i <= n;i++) {
			dp[i] = max(dp[i - 1] + k[i - 1], k[i - 1]);
		}

		int ans = -1800000000;
		for (int i = 1;i <= n;i++)ans = max(ans, dp[i]);
		cout << ans << endl;
	}
	return 0;
}