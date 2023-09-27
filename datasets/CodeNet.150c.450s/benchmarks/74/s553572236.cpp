#include <iostream>
#include <vector>
#include <algorithm>
#define INF (1<<30)
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n, m; cin >> n >> m;
	vector<long long> dp(n + 10001, INF);
	vector<int> c(m, 0);
	for (int i = 0; i < m;i++) {
		cin >> c[i];
	}
	for (int i = 1; i <= n + 10000;i++) {
		for (auto val : c) {
			if (i - val < 0) continue;
			if (dp[i - val] == INF) {
				dp[i] = 1; continue;
			}
			dp[i] = min(dp[i], dp[i - val] + 1);
		}
	}
	cout << dp[n] << endl;
}