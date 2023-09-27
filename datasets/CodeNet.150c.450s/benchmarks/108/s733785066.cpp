#include <bits/stdc++.h>
using namespace std;
#define MAX 105
#define INFTY -1

int n, G[MAX][MAX], d[MAX];

void bfs(int s) {
	queue<int> Q;
	Q.push(s);
	d[s] = 0;
	while (!Q.empty()) {
		int u = Q.front();
		Q.pop();
		for (int v = 1; v <= n; v++) {
			if (G[u][v] == 0) continue;
			if (d[v] != INFTY) continue;
			d[v] = d[u] + 1;
			Q.push(v);
		}
	}
}

int main(void) {
	int i, j, u, k, v;
	for (i = 0; i < MAX; i++) {
		d[i] = INFTY;
	}
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> u >> k;
		for (j = 0; j < k; j++) {
			cin >> v;
			G[u][v] = 1;
		}
	}

	bfs(1);
	
	for (i = 1; i <= n; i++) {
		cout << i << " " << d[i] << endl;
	}
}
