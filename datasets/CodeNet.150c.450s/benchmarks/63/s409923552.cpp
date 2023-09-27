#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#define INF 1<<30
using namespace std;
int main() {
	cin.tie(0);ios::sync_with_stdio(false);
	int V, E, r; cin >> V >> E >> r;
	vector<vector<pair<int,int>>> g(V);
	vector<int> dp(V);
	queue<int> q;

	//input
	int s, t, d;
	for (int i = 0; i < E; i++) {
		cin >> s >> t >> d;
		g[s].push_back(make_pair(t, d));
	}

	//initialize
	fill(dp.begin(), dp.end(), INF);
	dp[r] = 0;
	q.push(r);

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
		if (dp[i] == INF) { cout << "INF" << endl; }
		else { cout << dp[i] << endl; }
	}
}