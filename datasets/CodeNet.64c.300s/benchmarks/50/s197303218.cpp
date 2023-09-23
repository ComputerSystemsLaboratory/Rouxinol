#include<stdio.h>

int BubbleSort( int *A, int N) {
	int C = 0;
	int flag = 1;
	while ( flag ) {
		flag = 0;
		for ( int j = N-1; j > 0; j--) {
			if ( A[j - 1] > A[j]) {
				int temp = A[j - 1];
				A[j - 1] = A[j];
				A[j] = temp;
				flag = 1;
				C++;
			}
		}
	}
	return C;
}

int main() {
	int N;
	int A[100+10];
	scanf("%d", &N);
	for ( int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	int c = BubbleSort(A, N);
	for ( int i = 0; i < N; i++) {
		printf("%d",A[i]);
		if(i != N - 1) printf(" ");
		else printf("\n");
	}
	printf("%d\n",c);
}
