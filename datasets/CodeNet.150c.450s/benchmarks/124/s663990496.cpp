#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#define INF 1<<30
using namespace std;
int main() {
	cin.tie(0);ios::sync_with_stdio(false);
	int V; cin >> V;
	vector<vector<pair<int, int>>> g(V);
	vector<int> dp(V);
	queue<int> q;

	//input
	for (int i = 0; i < V; i++) {
		int u, k; cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int c, v;
			cin >> c >> v;
			g[u].push_back(make_pair(c, v));
		}
	}

	//initialize
	fill(dp.begin(), dp.end(), INF);
	dp[0] = 0;
	q.push(0);

	//Dijkstra
	while (!q.empty()) {
		int k = q.front(); q.pop();
		for (int i = 0; i < g[k].size();i++) {
			int next = g[k][i].first;
			int w = g[k][i].second;
			if (dp[k] + w < dp[next]) {
				dp[next] = dp[k] + w;
				q.push(next);
			}
		}
	}

	//output
	for (int i = 0; i < V;i++) {
		cout << i << " " << dp[i] << endl;
	}
}