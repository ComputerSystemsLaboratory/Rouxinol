#include <iostream>
#include <cstring>
using namespace std;

int n, dp[32];

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	while (cin >> n, n) {
		memset(dp, 0, sizeof(dp));

		dp[1] = dp[2] = dp[3] = 1;

		for (int i = 1; i < n + 1; ++i) {
			if (i + 3 < n + 1) {
				dp[i + 3] += dp[i];
			}
			if (i + 2 < n + 1) {
				dp[i + 2] += dp[i];
			}
			if (i + 1 < n + 1) {
				dp[i + 1] += dp[i];
			}
		}
		cout << dp[n] / 10 / 365 + 1<< endl;
	}

	return 0;
}