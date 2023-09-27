#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void Trace( int *A, int N, int cnt){
	//?????????????????????????????????N-1??¨??????
	for (int i = 0; i < N - 1; i++){
		printf("%d ", A[i]);
	}
	printf("%d\n", A[N - 1]);
	printf("%d\n", cnt);
}

int BubbleSort(int *A, int N){
	int cnt = 0;

	for (int i = N-1; i > 0; i--){
		for (int j = N-1; j >= 0; j--){

			//??\???????????????
			if (A[j - 1] > A[j]){
				int t = A[j - 1];
				A[j - 1] = A[j];
				A[j] = t;
				cnt++;
			}
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

	int cnt = BubbleSort(A, N);
	Trace(A, N, cnt);

	free(A);

	return 0;
}