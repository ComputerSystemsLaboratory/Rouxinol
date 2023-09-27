#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N >> M;
	vector<vector<int>> adj(N);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b;
		--a;--b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	vector<int> par(N, -1);
	queue<int> q;
	q.push(0);
	par[0] = 0;
	int cnt = 0;
	while (q.size()) {
		int at = q.front();
		q.pop();
		++cnt;
		for (int c : adj[at]) {
			if (par[c] == -1) {
				q.push(c);
				par[c] = at;
			}
		}
	}
	if (cnt == N) {
		cout << "Yes" << endl;
		for (int i = 1; i < N; ++i) {
			cout << par[i]+1 << endl;
		}
	} else {
		cout << "No" << endl;
	}
}