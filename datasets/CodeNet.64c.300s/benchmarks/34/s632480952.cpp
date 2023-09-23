#include<stdio.h>

void Output(int *A, int N);

int main(){
	int *A;
	int N = 0;
	scanf("%d", &N);
	A = new int[N];

	for( int i = 0; i < N; i++ ){
		scanf("%d", &A[i]);
	}

	for( int i = 0; i < N; i++ ){
		int temp = A[i];
		for( int j = i - 1; j >= 0; j-- ){
			if( temp < A[j] ){
				A[j+1] = A[j];
				A[j] = temp;
			}
		}
		Output(A, N);
	}

	return 0;
}

void Output(int *A, int N){
	printf("%d", A[0]);
	for( int i = 1; i < N; i++ ){
		printf(" %d", A[i]);
	}
	printf("\n");
	return;
}