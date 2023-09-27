#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

const int MAX = 100;
long long D[MAX][MAX];
long long INF = (1LL << 32);

int main() {

	int v, e;
	scanf("%d %d", &v, &e);
	for (int i = 0; i < v; ++i) {
		for (int j = 0; j < v; ++j) {
			if (i == j) {
				D[i][j] = 0;
			} else {
				D[i][j] = INF;
			}
		}
	}
	for (int i = 0; i < e; ++i) {
		int s, t, d;
		scanf("%d %d %d", &s, &t, &d);
		D[s][t] = d;
	}

	for (int k = 0; k < v; ++k) {
		for (int i = 0; i < v; ++i) {
			if (D[i][k] == INF)
				continue;
			for (int j = 0; j < v; ++j) {
				if (D[k][j] == INF)
					continue;
				D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
			}
		}
	}

	bool negative = false;
	for (int i = 0; i < v; ++i) {
		if (D[i][i] < 0) {
			negative = true;
		}
	}

	if (negative) {
		cout << "NEGATIVE CYCLE" << endl;
	} else {
		for (int i = 0; i < v; ++i) {
			for (int j = 0; j < v; ++j) {
				if (j != 0) {
					cout << " ";
				}
				if (D[i][j] != INF) {
					cout << D[i][j];
				} else {
					cout << "INF";
				}
			}
			cout << endl;
		}
	}

	return 0;
}