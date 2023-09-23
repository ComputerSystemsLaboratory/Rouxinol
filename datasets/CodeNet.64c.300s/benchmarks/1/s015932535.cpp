#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int partition(int A[], int p, int r)
{
	int x = A[r];
	int i = p-1;
	for (int j = p; j < r; j++) {
		if (A[j] <= x) {
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i+1], A[r]);
	return i+1;
}

int main(int argc, char *argv[]) {
	int n;
	int A[100002];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	int res = partition(A, 0, n-1);
	for (int i = 0; i < n; i++) {
		if (i) {
			printf(" ");
		}
		if (i == res) {
			printf("[");
		}
		printf("%d", A[i]);
		if (i == res) {
			printf("]");
		}
	}
	printf("\n");
	return 0;
}
