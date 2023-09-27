#include <iostream>

using namespace std;

typedef long long ll;

int main() {
	int n;
	while ( cin >> n, n ) {
		int dp[50] = {0}; dp[0] = 1;
		for (int i = 0; i < n; ++i) {
			dp[i+1] += dp[i];
			dp[i+2] += dp[i];
			dp[i+3] += dp[i];
		}
		int ans = dp[n] / 3650 + (dp[n] % 3650 ? 1 : 0);
		cout << ans << endl;
	}
}