// Ref : https://book.mynavi.jp/ec/products/detail/id=35408
// Ref : http://dai1741.github.io/maximum-algo-2012/docs/shortest-path/

#include <cstdio>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

static const int NVMAX = 100;
static const long long INF = (1LL<<32); // 1LL is 1 by Long-Long-type

int NV, NE; // vartex, edge number
long long D[NVMAX][NVMAX]; // adjacency list

void floyd() {
	for (int k = 0; k < NV; k++) {
		for (int i = 0; i < NV; i++) {
			if (D[i][k] == INF) continue;
			for (int j = 0; j < NV; j++) {
				if (D[k][j] == INF) continue;
				D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
			}
		}
	}
}

int main() {
	scanf("%d %d", &NV, &NE);

	for (int i = 0; i < NV; i++) {
		for (int j = 0; j < NV; j++) {
			D[i][j] = (i == j ? 0 : INF);
		}
	}

	int s, t, d; // start, termination, degree of edge
	for (int i = 0; i < NE; i++) {
		scanf("%d %d %d", &s, &t, &d);
		D[s][t] = d;
	}

	floyd();

	// check of negative closed-loop
	bool negative = false;
	for (int i = 0; i < NV; i++) if (D[i][i] < 0) negative = true;

	if (negative) {
		printf("NEGATIVE CYCLE\n");
	}
	else {
		for (int i = 0; i < NV; i++) {
			for (int j = 0; j < NV; j++) {
				if (j) printf(" ");
				if (D[i][j] == INF) printf("INF");
				else printf("%lld", D[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}
