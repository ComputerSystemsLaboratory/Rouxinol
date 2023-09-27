#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void Trace(int *A, int N, int cnt){
	//?????????????????????????????????N-1??¨??????
	for (int i = 0; i < N - 1; i++){
		printf("%d ", A[i]);
	}
	printf("%d\n", A[N - 1]);
	printf("%d\n", cnt);
}

int SelectionSort(int *A, int N){
	int cnt = 0;

	for (int i = 0; i < N; i++){

		int minj = i;

		for (int j = i; j < N; j++){
			if (A[minj] > A[j]){
				minj = j;
			}
		}

		if (minj != i) {
			int t = A[i];
			A[i] = A[minj];
			A[minj] = t;
			cnt++;
		}
	}

	return cnt;
}

int main(int argc, char *argv[]){
	int N;

	scanf("%d", &N);

	int *A = (int*)malloc(sizeof(int) * N);

	//??\???
	for (int i = 0; i < N; i++){
		scanf("%d", &A[i]);
	}

	int cnt = SelectionSort(A, N);
	Trace(A, N, cnt);

	free(A);

	return 0;
}