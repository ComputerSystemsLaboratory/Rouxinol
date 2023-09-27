#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INFTY -1

int n, m, st[MAX];
vector<vector<int> > G, C;

void bfs(int s) {
	if (st[s] != 0) return;
	vector<int> ve;
	queue<int> Q;
	Q.push(s);
	st[s] = 1;
	ve.push_back(s);
	while (!Q.empty()) {
		int u = Q.front();
		Q.pop();
		for (int i = 0; i < G[u].size(); i++) {
			int v = G[u][i];
			if (st[v] != 0) continue;
			Q.push(v);
			st[v] = 1;
			ve.push_back(v);
		}
	}
	C.push_back(ve);
}

void solution() {
	int i;
	for (i = 0; i < n; i++) {
		bfs(i);
	}
	for (i = 0; i < C.size(); i++) {
		sort(C[i].begin(), C[i].end());
	}
}

int main(void) {
	int i, j, a, b, q;
	for (i = 0; i < MAX; i++) {
		st[i] = 0;
	}
	cin >> n >> m;
	G.resize(n);
	for (i = 0; i < m; i++) {
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	solution();
	cin >> q;
	while (q--) {
		bool flag = false;
		cin >> a >> b;
		for (i = 0; i < C.size(); i++) {
			if (*(lower_bound(C[i].begin(), C[i].end(), a)) != a) continue;
			if (*(lower_bound(C[i].begin(), C[i].end(), b)) != b) continue;
			flag = true;
		}
		if (flag)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}
