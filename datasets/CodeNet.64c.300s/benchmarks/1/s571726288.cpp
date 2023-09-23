#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
using namespace std;
const int num = 100002;
int partition(int A[], int p, int r) {
	int base = A[r];
	int q = p - 1;
	int i;
	for (i = 0; i < r; i++) {
		if (A[i] <= base)
			swap(A[i], A[++q]);
	}
	swap(A[r], A[++q]);
	return q;
}
int main() {
	int n, a[num];
	cin >> n;
	for (int i = 0; i < n; i++)
		scanf("%d",&a[i]);
	int v = partition(a, 0, n - 1);
	for (int i = 0; i < v; i++) {
		printf("%d", a[i]);
		printf(" ");
	}
	printf("[%d] ", a[v]);
	for (int i = v + 1; i < n; i++) {
		printf("%d", a[i]);
		if(i != n-1)printf(" ");

	}
	printf("\n");
	return 0;
}