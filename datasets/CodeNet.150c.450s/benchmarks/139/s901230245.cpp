#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<int>> G(N);
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	vector<int> guide(N);
	guide[0] = 0;
	vector<int> dist(N, -1);
	queue<int> q;
	dist[0] = 0;
	q.push(0);

	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int nv : G[v]) {
			if (dist[nv] != -1) continue;
			dist[nv] = dist[v] + 1;
			guide[nv] = v;
			q.push(nv);
		}
	}

	cout << "Yes" << endl;
	for (int i = 1; i < N; i++) {
		cout << guide[i] + 1 << endl;
	}

	return 0;
}
