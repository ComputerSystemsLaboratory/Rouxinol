#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int NMAX = 100;
const int AMAX = 9999999;

const int BLACK = 2;
const int GRAY = 1;
const int WHITE = 0;

int A[NMAX][NMAX];
int c[NMAX];
int d[NMAX];
int n;

void dijkstra() {
	while (true) {
		int minv, minu;
		minv = AMAX;
		minu = -1;
		for (int i = 0; i < n; i++) {
			if (d[i] == AMAX || c[i] == BLACK) continue;
			minv = min(d[i], minv);	
			if (d[i] == minv) minu = i;
		}
		if (minu == -1 || minv == AMAX) return;

		c[minu] = BLACK;

		for (int i = 0; i < n; i++) {
			if (A[minu][i] <= 0 || c[i] == BLACK) continue;

			if (d[i] > d[minu] + A[minu][i]) {
				d[i] = d[minu] + A[minu][i];
				c[i] = GRAY;
			}
		}
	}
}

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		c[i] = WHITE;
		d[i] = AMAX;
		int u, k;
		scanf("%d %d", &u, &k);

		for (int j = 0; j < k; j++) {
			int v, c;
			scanf("%d %d", &v, &c);
			A[u][v] = c;
		}
	}

	d[0] = 0;
	dijkstra();

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", i, d[i]);
	}

	return 0;
}

