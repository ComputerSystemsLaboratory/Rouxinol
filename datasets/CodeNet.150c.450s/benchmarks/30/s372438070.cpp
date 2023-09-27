#include<stdio.h>

int SelectionSort ( int *A, int N) {
	int C = 0;
	for( int i = 0; i < N; i++) {
		int minj = i;
		for( int j = i + 1; j < N; j++) {
			if(A[j] < A[minj]) {
				minj = j;
			}
		}
		if( minj != i){
			int temp = A[i];
		    A[i] = A[minj];
		    A[minj] = temp;
		    C++;
		}
	}
	return C;
}

int main() {
	int N;
	int A[100+10];
	scanf("%d", &N);
	for( int i = 0; i < N; i++) {
		scanf("%d",&A[i]);
	}
	int c = SelectionSort(A,N);
	for(int i = 0; i < N; i++) {
		printf("%d", A[i]);
		if(i != N - 1) printf(" ");
		else printf("\n");
	}
	printf("%d\n", c);
	return 0;
}
