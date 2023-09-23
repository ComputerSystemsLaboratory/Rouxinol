#include <iostream>
#include <cstdio>

using namespace std;

int cost[10][10];
int N;
int nTown;

static const int INT_MAX = 1e6;

void init() {
	fill(cost[0], &cost[9][10], INT_MAX);
	for (int i = 0; i < 10; i++) {
		cost[i][i] = 0;
	}
	nTown = -1;
}

void solve() {
	for (int k = 0; k < nTown; k++) {
		for (int i = 0; i < nTown; i++) {
			for (int j = 0; j < nTown; j++) {
				cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
			}
		}
	}
	int mn = INT_MAX, idx = -1;
	for (int t = 0; t < nTown; t++) {
		int sum = 0;
		for (int i = 0; i < nTown; i++) {
			sum += cost[t][i];
		}
		if (sum < mn) {
			idx = t, mn = sum;
		}
	}
	printf("%d %d\n", idx, mn);
}

int main() {
	while (scanf("%d ", &N) != EOF) {
		if (N == 0) {
			return 0;
		}
		init();
		for (int i = 0; i < N; i++) {
			int a, b, c;
			scanf("%d %d %d ", &a, &b, &c);
			cost[a][b] = c;
			cost[b][a] = c;
			nTown = max(a, max(b, nTown));
		}
		nTown++;
		solve();
	}	
}