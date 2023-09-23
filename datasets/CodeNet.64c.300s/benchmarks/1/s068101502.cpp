#include <cstdio>

#define N_MAX 100000

int partition(int A[], int start, int end) {
	int tmp, j = 0, x = A[end];
	for (int i = start; i < end; i++) {
		if (A[i] <= x) {
			tmp = A[j];
			A[j] = A[i];
			A[i] = tmp;
			j++;
		}
	}
	tmp = A[end];
	A[end] = A[j];
	A[j] = tmp;

	return j;
}

int main() {
	int n, A[N_MAX];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &A[i]);

	int j = partition(A, 0, n - 1);
	for (int i = 0; i < n; i++) {
		if (i != 0)	printf(" ");
		if (i == j) {
			printf("[%d]", A[i]);
		}
		else {
			printf("%d", A[i]);
		}
	}
	printf("\n");

	return 0;
}