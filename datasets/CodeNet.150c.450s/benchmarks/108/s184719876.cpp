#include <iostream>
#include <queue>
#include <vector>

#define MAX_NODE 100
#define INF 1000000000

using namespace std;

int d[MAX_NODE];
vector<int> adj[MAX_NODE];

void bfs(int n, int start) {
	queue<int> que;

	for (int i = 0; i < n; i++)
		d[i] = (i == start ? 0 : INF);

	que.push(start);
	while(!que.empty()) {
		int from = que.front();
		que.pop();

		for (int i = 0; i < adj[from].size(); i++) {
			int to = adj[from][i];
			if (d[to] == INF) {
				d[to] = d[from] + 1;
				que.push(to);
			}
		}
	}
}

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		u--;
		while (k--) {
			int v;
			cin >> v;
			v--;
			adj[u].push_back(v);
		}
	}

	bfs(n, 0);

	for (int i = 0; i < n; i++)
		if (d[i] != INF)
			cout << i + 1 << " " << d[i] << endl;
		else
			cout << i + 1 << " -1" << endl;

	return 0;
}