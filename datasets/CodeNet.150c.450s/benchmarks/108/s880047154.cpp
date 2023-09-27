#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	bool G[n + 1][n + 1];
	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= n; ++j)
			G[i][j] = false;
	}

	for (int i = 0; i < n; ++i) {
		int u, k;
		scanf("%d %d", &u, &k);
		for (int j = 0; j < k; ++j) {
			int v;
			scanf("%d", &v);
			G[u][v] = true;
		}
	}

	int d[n + 1];
	for (int i = 0; i <= n; ++i)
		d[i] = -1;

	int color[n + 1];
	int WHITE = 0;
	int GRAY = 1;
	int BLACK = 2;
	for (int i = 0; i <= n; ++i)
		color[i] = WHITE;

	queue<int> Q;
	Q.push(1);
	d[1] = 0;
	color[1] = GRAY;

	while (Q.size() != 0) {
		int v = Q.front();
		for (int i = 1; i <= n; ++i) {
			if (G[v][i] && color[i] == WHITE) {
				Q.push(i);
				color[i] = GRAY;
				d[i] = d[v] + 1;
			}
		}
		Q.pop();
		color[v] = BLACK;
	}
	for (int i = 1; i <= n; ++i) {
		cout << i << " " << d[i] << endl;
	}
	return 0;
}