#include <stdio.h>
#include <math.h>

#define M_PI 3.141592653589793


int main(void) {

	int i, j, k;
	int m, n, l;
	long sum;
	int A[100][100] = { 0 };
	int B[100][100] = { 0 };

	scanf("%d %d %d", &n, &m, &l);
	for (j = 0; j < n; j++) {
		for (i = 0; i < m; i++) {
			scanf("%d", &A[j][i]);
		}
	}
	for (j = 0; j < m; j++) {
		for (i = 0; i < l; i++) {
			scanf("%d", &B[j][i]);
		}
	}


	for (j = 0; j < n; j++) {
		for (i = 0; i < l; i++) {
			sum = 0;
			for (k = 0; k < m; k++) {
				sum += A[j][k] * B[k][i];
			}
			if (i != l - 1)			printf("%ld ", sum);
			else					printf("%ld", sum);
		}
		printf("\n");
	}
	

	return 0;

}