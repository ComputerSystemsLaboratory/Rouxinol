#include <cstdio>
#include <algorithm>

#define MAX 500000

int A[MAX] = { 0 };

int partition(int p, int r) {
	int x = A[r];
	int i = p - 1;
	for (int j = 0; j < r; j++) {
		if (A[j] <= x) {
			i = i + 1;
			std::swap(A[i], A[j]);
		}
	}
	std::swap(A[i + 1], A[r]);
	return i + 1;
}

int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	int r = A[n-1];
	int q = partition(0,n-1);

	for (int i = 0; i < n; i++) {
		if (i) {
			printf(" ");
		}
		if (i == q) {
			printf("[%d]", A[i]);
		}
		else {
			printf("%d", A[i]);
		}
	}
	printf("\n");
	return 0;
}