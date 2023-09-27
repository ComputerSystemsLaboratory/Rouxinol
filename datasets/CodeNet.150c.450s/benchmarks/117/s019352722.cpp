#include <iostream>
#include <limits.h>

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
	L[n1] = INT_MAX;
	R[n2] = INT_MAX;

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
	std::cin >> n;
	int A[n];
	for (int i = 0; i < n; ++i) {
		std::cin >> A[i];
	}
	marge_sort(A, 0, n);

	for (int i = 0; i < n; ++i) {
		std::cout << A[i] << (i < n - 1 ? ' ' : '\n');
	}
	std::cout << cnt << std::endl;

	return 0;
}