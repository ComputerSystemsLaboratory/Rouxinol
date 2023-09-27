#include<stdio.h>



int main() {
	int n, m, l;
	long A[100][100];
	long B[100][100];
	long C[100][100];

	scanf("%d %d %d", &n, &m, &l);
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < m; col++) {
			scanf("%ld", &A[row][col]);
		}
	}
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < l; col++) {
			scanf("%ld", &B[row][col]);
		}
	}

	for (int row = 0; row < n; row++) {
		for (int col = 0; col < l; col++) {
			C[row][col] = 0;
			for (int i = 0; i < m; i++) {
				C[row][col] += A[row][i] * B[i][col];
			}
		}
	}

	for (int row = 0; row < n; row++) {
		for (int col = 0; col < l; col++) {
			printf("%ld", C[row][col]);
			if (col < l - 1)printf(" ");
		}
		printf("\n");
	}


	return 0;
}
