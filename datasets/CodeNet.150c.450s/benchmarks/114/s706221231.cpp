// Ref : https://book.mynavi.jp/ec/products/detail/id=35408

#include <iostream>
using namespace std;
const static int NMAX = 100;
const static int VMAX = 2000;
const static int INF = VMAX + 1;
int n, G[NMAX][NMAX];

// prim's algorithm for Minimum Spanning Tree (MST)
int prim() {
	bool state[NMAX];
	int distance[NMAX];
	for (int i = 0; i < n; i++) {
		state[i] = false;
		distance[i] = INF;
	}
	distance[0] = 0;

	while (true) {
		int u, mincost = INF;
		for (int i = 0; i < n; i++) {
			if (!state[i] && (distance[i] < mincost)) {
				u = i;
				mincost = distance[i];
			}
		}
		if (mincost == INF)	break;
		state[u] = true;

		for (int i = 0; i < n; i++) {
			if (!state[i] && (G[u][i] < distance[i])) {
				distance[i] = G[u][i];
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (distance[i] != INF) sum += distance[i];
	}

	return sum;
}

int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> G[i][j];
			if (G[i][j] == -1) G[i][j] = INF;
		}
	}

	cout << prim() << endl;

	return 0;
}
