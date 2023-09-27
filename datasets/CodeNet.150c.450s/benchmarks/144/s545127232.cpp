#include <stdio.h>

int main(void) {
	int n, m, l, A[100][100], B[100][100];
	long long c;

	scanf("%d %d %d\n", &n, &m, &l);
	for (int i = 0; i < n; i++) {
		for (int k = 0;k < m;k++) {
			scanf("%d ", &A[i][k]);
		}
		scanf("\n");
	}
	for (int k = 0; k < m; k++) {
		for (int j = 0; j < l; j++) {
			scanf("%d ", &B[k][j]);
		}
		scanf("\n");
	}

	for (int i = 0; i < n; i++) {
		
		for (int j = 0;j < l;j++) {
			c = 0;
			for (int k = 0; k < m; k++) {
				c += (A[i][k] * B[k][j]);
			}
			printf("%lld", c);
			if (j < l - 1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}