#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	int v, e;
	scanf("%d %d", &v, &e);

	long long INF = (1LL << 32);
	long long G[v][v];
	for (int i = 0; i < v; ++i) {
		for (int j = 0; j < v; ++j) {
			if (i == j)
				G[i][j] = 0;
			else
				G[i][j] = INF;
		}
	}

	for (int i = 0; i < e; ++i) {
		int s, t, d;
		scanf("%d %d %d", &s, &t, &d);
		G[s][t] = d;
	}

	for (int k = 0; k < v; ++k) {
		for (int i = 0; i < v; ++i) {
			if (G[i][k] == INF)
				continue;
			for (int j = 0; j < v; ++j) {
				if (G[k][j] == INF)
					continue;
				G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
			}
		}
	}

	bool negative = false;
	for (int i = 0; i < v; ++i) {
		if (G[i][i] < 0) {
			negative = true;
			break;
		}
	}

	if (negative) {
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}

	for (int i = 0; i < v; ++i) {
		for (int j = 0; j < v; ++j) {
			if (j != 0)
				cout << " ";
			if (G[i][j] == INF) {
				cout << "INF";
			} else {
				cout << G[i][j];
			}
		}
		cout << endl;
	}

	return 0;
}