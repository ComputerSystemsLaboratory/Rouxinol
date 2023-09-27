#include <iostream>

int cnt = 0;

void marge(int A[], int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;

	int L[n1 + 1], R[n2 + 1];
	for (int i = 0; i < n1; ++i) {
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; ++i) {
		R[i] = A[mid + i];
	}
	L[n1] = 0x7fffffff;
	R[n2] = 0x7fffffff;

	int i = 0;
	int j = 0;
	for (int k = left; k < right; ++k) {
		A[k] = (L[i] <= R[j]) ? L[i++] : R[j++];
		++cnt;
	}
}

void marge_sort(int A[], int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		marge_sort(A, left, mid);
		marge_sort(A, mid, right);
		marge(A, left, mid, right);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int A[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}
	marge_sort(A, 0, n);

	for (int i = 0; i < n - 1; ++i) {
		printf("%d ", A[i]);
	}
	printf("%d\n%d\n", A[n-1], cnt);

	return 0;
}