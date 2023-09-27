#include <iostream>
#include <vector>
using namespace std;
vector<vector<int> > v(101);
int dp[101][2] = { 0 };
int n, t = 0;

void dfs(int a) {
	if (dp[a][0] == 0) { t++; dp[a][0] = t; }
	else { return; }
	for (int i = 0;i < v[a].size();i++) {
		if (dp[v[a][i]][0] == 0) {
			dfs(v[a][i]);
		}
	}
	if (dp[a][1] == 0) { t++; dp[a][1] = t; }
}

int main() {
	cin >> n;
	for (int i = 0; i < n;i++) {
		int u,k; cin >> u >> k;
		for (int j = 0; j < k;j++) {
			int x; cin >> x;
			v[u].push_back(x);
		}
	}
	for (int i = 1; i <= n;i++) {
		dfs(i);
	}
	for (int i = 1; i <= n;i++) {
		cout << i << ' ' << dp[i][0] << ' ' << dp[i][1] << endl;
	}
}