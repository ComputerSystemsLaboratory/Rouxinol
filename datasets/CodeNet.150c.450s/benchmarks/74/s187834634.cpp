#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	constexpr int INF = 1e9;
	int n,m;
	cin>>n>>m;
	vector<int> dp(n+1, INF), d(m);
	for (auto i = 0; i < m; i++) {
		cin>>d[i];
		dp[d[i]] = 1;
	}
	for (auto i = 0; i < n+1; i++) {
		for (auto& j : d) {
			if (i+j >= n+1) continue;
			dp[i+j] = min(dp[i+j], dp[i]+1);
		}
	}
	cout << dp[n] << endl;
	return 0;
}