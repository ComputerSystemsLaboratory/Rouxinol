#include <stdio.h>
int n, r, p, c, d[50], e[50];
int main() {
	while (true) {
		scanf("%d%d", &n, &r);
		if (n == 0 && r == 0) break;
		for (int i = 0; i < n; i++) d[i] = n - i;
		for (int i = 0; i < r; i++) {
			scanf("%d%d", &p, &c); p--;
			for (int j = 0; j < c; j++) {
				e[j] = d[j + p];
			}
			for (int j = c; j < p + c; j++) {
				e[j] = d[j - c];
			}
			for (int j = 0; j < p + c; j++) {
				d[j] = e[j];
			}
		}
		printf("%d\n", d[0]);
	}
	return 0;
}