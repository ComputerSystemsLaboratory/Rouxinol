#include <bits/stdc++.h>
using namespace std;

int main() {
	int V, E;
	cin >> V >> E;
	vector<vector<pair<int, int>>> G(V, vector<pair<int, int>>());
	for (int i=0;i<E;i++) {
		int s, t, w;
		cin >> s >> t >> w;
		pair<int, int> p_1 = make_pair(t, w);
		pair<int, int> p_2 = make_pair(s, w);
		G[s].push_back(p_1);
		G[t].push_back(p_2);
	}

	priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
	pair<long long, int> first = make_pair(0LL, 0);
	pq.push(first);
	vector<bool> visited(V, false);
	long long ans = 0LL;
	while (!pq.empty()) {
		pair<long long, int> rem = pq.top();
		pq.pop();
		if (visited[rem.second]) continue;
		visited[rem.second] = true;
		ans += rem.first;
		for (auto p : G[rem.second]) {
			if (visited[p.first]) continue;
			pair<long long, int> tmp = make_pair(p.second, p.first);
			pq.push(tmp);
		}
	}

	cout << ans << endl;
}
