#include<stdio.h>


void inserctionSort(int A[], int N);
void print(int A[],int N);

int main(){

	int N,i,j;
	int A[1000];

	scanf("%d", &N);

	for (i = 0; i < N; i++) scanf("%d", &A[i]);

	print(A, N);
	inserctionSort(A, N);
	

	return 0;

}

void inserctionSort(int A[], int N){

	int i, j;
	int v;

	for (i = 1; i < N; i++) {
		v = A[i];
		for (j = i - 1; j >= 0 && A[j] > v; j--) {
			A[j + 1] = A[j];
		}

		A[j+1] = v;

		print(A, N);
	
	}


}


void print(int A[],int N){

	int i;

	for (i = 0; i < N; i++){
		if (i > 0) printf(" ");
		printf("%d", A[i]);
	}

	printf("\n");


}