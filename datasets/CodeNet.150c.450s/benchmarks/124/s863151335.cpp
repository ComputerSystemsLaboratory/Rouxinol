#include <bits/stdc++.h>
using namespace std;
#define inf 1e9+100

int n, u, k, v, c, d[100];
vector<pair<int,int> > e[100];

void dijkstra(int n, vector<pair<int,int> > e[], int *d, int s) {
	priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > que;
	fill(d, d+n, inf), d[s] = 0;
	que.push({0,s});
	while(!que.empty()) {
		int v = que.top().second, dis = que.top().first; que.pop();
		if (d[v]<dis) continue;
		for (int i = 0; i < e[v].size(); ++i) {
			int to = e[v][i].first, cost = e[v][i].second;
			if (d[to] > d[v] + cost) {
				d[to] = d[v] + cost;
				que.push({d[to], to});
			}
		}
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> u >> k;
		for (int j = 0; j < k; ++j) {
			cin >> v >> c;
			e[u].push_back({v, c});
		}
	}
	dijkstra(n,e,d,0);
	for (int i = 0; i < n; ++i) cout << i << ' ' << d[i] << endl;
}
