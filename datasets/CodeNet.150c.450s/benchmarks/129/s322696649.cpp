#include <stdio.h>

int main(void) {
	int n, m, A[100][100];
	static int sum, total;

	scanf("%d %d\n", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0;j < m;j++) {
			scanf("%d ", &A[i][j]);
		}
		scanf("\n");
	}
	

	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = 0;j < m;j++) {
			printf("%d ", A[i][j]);
			sum += A[i][j];
			total += A[i][j];
		}
		printf("%d\n", sum);
	}
	for (int j = 0; j < m; j++) {
		sum = 0;
		for (int i = 0; i < n; i++) {
			sum += A[i][j];
		}
		printf("%d ", sum);
	}

	printf("%d\n", total);
	return 0;
}