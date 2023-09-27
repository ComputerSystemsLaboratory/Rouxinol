#include <cstdio>
#include <iostream>

using namespace std;

//4
//1 1 2
//2 1 4
//3 0
//4 1 3

//1 1 8
//2 2 7
//3 4 5
//4 3 6

const int MAX = 100;

int n;

int t = 0;

int G[MAX + 1][MAX + 1];
int d[MAX + 1];
int f[MAX + 1];

int color[MAX + 1];
int WHITE = 0;
int GRAY = 1;
int BLACK = 2;

void dfs(int v) {
	color[v] = GRAY;
	d[v] = ++t;

	for (int i = 1; i <= n; ++i) {
		if (G[v][i] == 1 && color[i] == WHITE)
			dfs(i);
	}

	color[v] = BLACK;
	f[v] = ++t;
}

int main() {

	scanf("%d", &n);

	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= n; ++j)
			G[i][j] = 0;
	}

	for (int i = 1; i <= n; ++i) {
		int u, k;
		scanf("%d %d", &u, &k);
		for (int j = 0; j < k; ++j) {
			int v;
			scanf("%d", &v);
			G[i][v] = 1;
		}
	}

	for (int i = 1; i <= n; ++i) {
		if (color[i] == WHITE)
			dfs(i);
	}

	for (int i = 1; i <= n; ++i) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}

	return 0;

}