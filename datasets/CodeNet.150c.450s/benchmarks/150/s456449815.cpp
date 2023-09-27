#include<stdio.h>
#include<stdlib.h>
//#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define VMAX 10000

int main() {

	unsigned short *A, *B;//, *C;

	int n, i, max=(1<<30)*-1;
	scanf("%d", &n);

	A = (unsigned short*)malloc(sizeof(short) * n + 1);
	B = (unsigned short*)malloc(sizeof(short) * n + 1);

	for (i = 0; i < n; i++) {
		scanf("%hu", &A[i+1]);
	}

	int C[VMAX+1] = {0};
//	for (i = 1; i <= n; i++) max = MAX(max, A[i]);

//	C = (unsigned short*)malloc(sizeof(short) * max + 1);
//	for (i = 0; i <= max; i++) C[i] = 0;

	for (i = 0; i < n; i++) C[A[i+1]]++;
	for (i = 1; i <= VMAX; i++) C[i] += C[i-1];

	for (i = n; i >= 1; i--) {
		B[C[A[i]]] = A[i];
		C[A[i]]--;
	}

	printf("%d", B[1]);
	for (i = 2; i <= n; i++) {
		printf(" %d", B[i]);
	}
	printf("\n");

	free(A);
	free(B);
	return 0;
}

