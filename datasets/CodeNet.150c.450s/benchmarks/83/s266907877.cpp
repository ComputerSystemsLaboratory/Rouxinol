#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, W;
	cin >> N >> W;
	vector<int> dp(W + 1, 0);
	for (int i = 0, v, w; i < N; i++) {
		cin >> v >> w;
		vector<int> t = dp;
		for (int j = w; j <= W; j++) {
			if (dp[j] < t[j - w] + v) {
				dp[j] = t[j - w] + v;
			}
		}
	}
	cout << dp[W] << endl;
	return 0;
}