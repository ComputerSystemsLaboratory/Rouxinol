#include<stdio.h>
#include<stdlib.h>
#define MAX 2000000
#define VMAX 10000

int main(){
	int *A,*B;
	int C[VMAX + 1];
	int n, i,j;
	scanf("%d", &n);
	A = new int[n+1];
	B = new int[n+1];
	for (i = 0; i <= VMAX; i++){
		C[i] = 0;
	}
	for (int i = 0; i < n; i++){
		scanf("%d", &j);
		A[i + 1] = j;
		C[A[i + 1]]++;
	}

	for (i = 1; i <= VMAX; i++){
		C[i] += C[i - 1];
	}

	for (i = n; i > 0; i--){
		B[C[A[i]]] = A[i];
		C[A[i]]--;
	}


	for (int i = 1; i <= n; i++){
		if (i > 1)printf(" ");
		printf("%d", B[i]);
	}
	printf("\n");
	delete[] A;
	delete[] B;
	return 0;
}