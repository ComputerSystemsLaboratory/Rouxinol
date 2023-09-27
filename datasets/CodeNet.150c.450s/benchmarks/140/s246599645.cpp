#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, c;
vector<pair<int,int> > e[10101];

int prim(int n, vector<pair<int,int> > e[]) {
	priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > q;
	bool used[n];
	memset(used, 0, sizeof(used));
	q.push({0,0});
	int res = 0;
	while (!q.empty()) {
		int cost = q.top().first, v = q.top().second; q.pop();
		if (used[v]) continue;
		used[v] = true;
		res += cost;
		for (int i=0; i<e[v].size(); ++i) q.push({e[v][i].second, e[v][i].first});
	}
	return res;
}

signed main() {
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> a >> b >> c;
		e[a].push_back({b,c}), e[b].push_back({a,c});
	}
	cout << prim(n,e) << endl;
}
