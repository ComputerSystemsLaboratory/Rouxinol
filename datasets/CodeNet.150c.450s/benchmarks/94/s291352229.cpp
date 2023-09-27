#include <cstdio>
using namespace std;

void swap(int *a, int *b) {
	int sub = *a;
	*a = *b;
	*b = sub;
}

int main() {
	int N, A[100];
	int change = 0;

	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		scanf("%d", A + i);
	}

	for (int i = 0;i < N;i++) {
		for (int j = N - 1;j > i;j--) {
			if (A[j] < A[j - 1]) {
				swap(&A[j], &A[j - 1]);
				change++;
			}
		}
	}

	for (int i = 0;i < N;i++) {
		printf("%d", A[i]);
		if (i + 1 < N)printf(" ");
		else printf("\n");
	}
	printf("%d\n", change);

	return 0;
}