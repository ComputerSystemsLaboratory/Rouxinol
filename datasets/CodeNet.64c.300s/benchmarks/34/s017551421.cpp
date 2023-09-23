#include<stdio.h>

void insertionSort ( int *A , int N) {
	for( int i = 1; i < N; i++) {
		int v = A[i];
		int j = i -1;
		while ( j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			j--; 
		}
		A[j + 1] = v;
		for( int i = 0; i < N; i++) {
	        printf("%d", A[i]);
	        if ( i != N -1 ) printf(" ");
	    }
	    printf("\n");
	}
}

int main() {
	int N, A[100+10];
	scanf("%d", &N);
	for( int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	for( int i = 0; i < N; i++) {
		printf("%d", A[i]);
		if ( i != N -1 ) printf(" ");
	}
	printf("\n");
	insertionSort( A, N );
}
