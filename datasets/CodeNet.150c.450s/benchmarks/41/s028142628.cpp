#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using pii = pair<int, int>;

const ll INF = 1e18;

int main() {
	int v, e;
	cin >> v >> e;
	vector<vector<ll>> dp(v, vector<ll>(v, INF));
	rep(i, v) dp[i][i] = 0;
	rep(i, e) {
		int s, t, d;
		cin >> s >> t >> d;
		dp[s][t] = d;
	}
	rep(i, v) rep(j, v) rep(k, v) {
		if (dp[j][i] == INF || dp[i][k] == INF) continue;
		dp[j][k] = min(dp[j][k], dp[j][i] + dp[i][k]);
	}
	rep(i, v) {
		if (dp[i][i] < 0) {
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		} 
	}
	rep(i, v) rep(j, v) {
		if (dp[i][j] != INF) cout << dp[i][j];
		else cout << "INF";
		if (j == v - 1) cout << endl;
		else cout << " ";
	}
	return 0;
}
