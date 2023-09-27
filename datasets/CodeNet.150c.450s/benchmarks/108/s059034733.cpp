#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int d[100];
vector<int> adj[100];

void bfs(int n, int start) {
	queue<int> que;

	for (int i = 0; i < n; i++)
		d[i] = i == start ? 0 : -1;

	que.push(start);
	while(!que.empty()) {
		int from = que.front();
		que.pop();

		for (int& to : adj[from])
			if (d[to] == -1) {
				d[to] = d[from] + 1;
				que.push(to);
			}
	}
}

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		while (k--) {
			int v;
			cin >> v;
			adj[u - 1].push_back(v - 1);
		}
	}

	bfs(n, 0);

	for (int i = 0; i < n; i++)
		cout << i + 1 << " " << d[i] << endl;

	return 0;
}