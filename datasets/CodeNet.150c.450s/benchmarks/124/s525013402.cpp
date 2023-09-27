#include <bits/stdc++.h>
using namespace std;

#define MAX 100
#define INF INT_MAX
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n;
int col[MAX];
int M[MAX][MAX];
int d[MAX];
int p[MAX];

void init(int n) {
	for (int i = 0; i < n; i++) {
		col[i] = WHITE;
		for (int j = 0; j < n; j++)
			M[i][j] = INF;
		d[i] = INF;
	}
}

void input() {
	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int v, c;
			cin >> v >> c;
			M[i][v] = c;
		}
	}
}

void dijkstra(int s) {
	d[s] = 0;
	p[s] = -1;
	while (true) {
		int minc = INF;
		int u;
		for (int i = 0; i < n; i++) {
			if (col[i] != BLACK && d[i] < minc) {
				minc = d[i];
				u = i;
			}
		}
		if (minc == INF) break;
		col[u] = BLACK;
		for (int v = 0; v < n; v++) {
			if (col[v] != BLACK && M[u][v] != INF) {
				if (d[u] + M[u][v] < d[v]) {
					d[v] = d[u] + M[u][v];
					p[v] = u;
					col[v] = GRAY;
				}
			}
		}
	}
}

void output() {
	for (int u = 0; u < n; u++)
		cout << u << " " << d[u] << endl;
}

int main() {
	cin >> n;
	init(n);
	input();
	dijkstra(0);
	output();
	return 0;
}

