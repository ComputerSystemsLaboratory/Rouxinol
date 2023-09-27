#include<stdio.h>

int selection_sort(int A[], int N) {

	int i, j;
	int change = 0;
	int minj;
	int tmp;

	for (i = 0; i < N - 1; i++) {
		minj = i;
		for (j = i; j < N; j++) {
			if (A[j] < A[minj]) {
				minj = j;
			}
		}

		tmp = A[i];
		A[i] = A[minj];
		A[minj] = tmp;

		if (minj != i) {
			change++;
		}
	}

	return change;
}

int main() {

	int N, A[100], i, change;

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}

	change = selection_sort(A, N);

	for (i = 0; i < N; i++) {
		if (i > 0)printf(" ");
		printf("%d", A[i]);
	}

	printf("\n");
	printf("%d\n", change);

	return 0;

}