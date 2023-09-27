#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<functional>

using namespace std;
using ll = long long;
using pint = pair<int, int>;

int INF = 1 << 30;

int main() {
	int V, E, r;
	cin >> V >> E >> r;
	vector<vector<pint>> G(V);
	for (int i = 0; i < E; i++) {
		int s, t, d;
		cin >> s >> t >> d;
		G[s].push_back(make_pair(d, t));
	}
	priority_queue<pint, vector<pint>, greater<pint>> q;
	vector<int> dist(V, INF);
	dist[r] = 0;
	q.push(make_pair(0, r));

	while (!q.empty()) {
		pint p = q.top();
		int v = p.second;
		q.pop();
		for (auto np : G[v]) {
			int nw = np.first;
			int nv = np.second;
			if (dist[nv] > dist[v] + nw) {
				dist[nv] = dist[v] + nw;
				q.push(make_pair(dist[nv], nv));
			}
		}
	}

	for (int i = 0; i < V; i++) {
		if (dist[i] == INF) cout << "INF" << endl;
		else cout << dist[i] << endl;
	}

	return 0;
}
