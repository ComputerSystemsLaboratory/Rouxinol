#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;
queue<int> q;
vector<vector<int> > v(101);
int dp[101];
int n, t = 0;
int main() {
	cin >> n;
	for (int i = 0; i < n;i++) {
		int u, k; cin >> u >> k;
		for (int j = 0; j < k;j++) {
			int x; cin >> x;
			v[u].push_back(x);
		}
	}
	memset(dp, -1, sizeof(dp));
	q.push(1); dp[1] = 0;
	while (!q.empty()) {
		int a = q.front(); q.pop();
		for (int i = 0; i < v[a].size();i++) {
			if (dp[v[a][i]] == -1) {
				dp[v[a][i]] = dp[a] + 1;
				q.push(v[a][i]);
			}
		}
	}
	for (int i = 1; i <= n;i++) {
		cout << i << " " << dp[i] << endl;
	}
}