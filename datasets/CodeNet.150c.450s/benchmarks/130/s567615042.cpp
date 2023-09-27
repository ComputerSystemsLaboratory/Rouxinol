#include <stdio.h>

int main(void) {
	int n, m, A[100][100], b[100], c;

	scanf("%d %d\n", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0;j < m;j++) {
			scanf("%d ", &A[i][j]);
		}
		scanf("\n");
	}
	for (int j = 0; j < m; j++) {
		scanf("%d\n", &b[j]);
	}
	
	for (int i = 0; i < n; i++) {
		c = 0;
		for (int j = 0;j < m;j++) {
			c += (A[i][j] * b[j]);
		}
		printf("%d\n", c);
	}
	return 0;
}