#include <algorithm>
#include <cstdio>
#include <climits>
#include <queue>
#include <vector>
using namespace std;

int d[10][10];

int main() {
	for (;;) {
		int n; scanf("%d", &n);
		if (n == 0) break;
		for (int u = 0; u < 10; u++)
			for (int v = 0; v < 10; v++)
				d[u][v] = (u == v) ? 0 : (INT_MAX / 2);
		int N = 0;
		for (; n > 0; n--) {
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			d[a][b] = c;
			d[b][a] = c;
			N = max(N, max(a + 1, b + 1));
		}
		for (int k = 0; k < N; k++)
			for (int u = 0; u < N; u++)
				for (int v = 0; v < N; v++)
					d[u][v] = min(d[u][v], d[u][k] + d[k][v]);
		int umin = 0, dmin = INT_MAX;
		for (int u = 0; u < N; u++) {
			int dsum = 0;
			for (int v = 0; v < N; v++)
				dsum += d[u][v];
			if (dsum < dmin) {
				umin = u;
				dmin = dsum;
			}
		}
		printf("%d %d\n", umin, dmin);
	}
}