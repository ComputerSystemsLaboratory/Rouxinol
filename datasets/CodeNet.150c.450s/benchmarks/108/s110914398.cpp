#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using Graph = vector<vector<int>>;

int main() {
	int n;
	cin >> n;

	Graph G(n);

	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++) {
			int v;
			cin >> v;
			v--;
			G[u].push_back(v);
		}
	}

	vector<int> dist(n, -1);
	queue<int> q;
	q.push(0);
	dist[0] = 0;

	while (!q.empty()) {
		int v = q.front();
		q.pop();

		for (int nv : G[v]) {
			if (dist[nv] != -1) continue;
			dist[nv] = dist[v] + 1;
			q.push(nv);
		}
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << " " << dist[i] << endl;
	}

	return 0;
}

