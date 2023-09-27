#include <bits/stdc++.h>
using namespace std;

#define MAX 100000
#define WHITE -1

int n, m, q;
vector<int> G[MAX];
int col[MAX];

void dfs(int s, int c) {
	col[s] = c;
	for (int v = 0; v < G[s].size(); v++) {
		if (col[G[s][v]] == WHITE)
			dfs(G[s][v], c);
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		col[i] = WHITE;
	}
	for (int i = 0; i < m; i++) {
		int s, t;
		cin >> s >> t;
		G[s].push_back(t);
		G[t].push_back(s);
	}
	int id = 0;
	for (int i = 0; i < n; i++) {
		if (col[i] == WHITE) {
			dfs(i, ++id);
		}
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		int s, t;
		cin >> s >> t;
		cout << (col[s] == col[t] ? "yes" : "no") << endl;
	}
	return 0;
}

