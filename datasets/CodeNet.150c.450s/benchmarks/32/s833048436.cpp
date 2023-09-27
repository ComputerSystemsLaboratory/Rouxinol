#include<cstdio>

int main() {
	while (1) {
		int m, nmin, nmax, p[201], maxg = 0, n;
		scanf("%d %d %d", &m, &nmin, &nmax);
		for (int i = 1; i <= m; i++) {
			scanf("%d", &p[i]);
		}
		for (int j = nmin; j <= nmax; j++) {
			if (p[j] - p[j+1] >= maxg) {
				maxg = p[j] - p[j+1];
				n = j;
			}
		}
		if (m == 0 && nmin == 0 && nmax == 0) {
			return 0;
		}
		else {
			printf("%d\n", n);
		}
	}
}
