#include <cstdio>
#include <iostream>

using namespace std;

int INFTY = 1000000001;

long long merge(int A[], int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;

	int L[n1];
	int R[n2];

	for (int i = 0; i < n1; ++i) {
		L[i] = A[left + i];
	}

	for (int i = 0; i < n2; ++i) {
		R[i] = A[mid + i];
	}

	L[n1] = INFTY;
	R[n2] = INFTY;

	int i = 0;
	int j = 0;

	long long cnt = 0;

	for (int k = left; k < right; ++k) {
		if (L[i] <= R[j]) {
			A[k] = L[i];
			++i;
		} else {
			A[k] = R[j];
			++j;
			cnt += n1 - i;
		}
	}
	return cnt;
}

long long mergeSort(int A[], int left, int right) {

	if (left + 1 < right) {
		int mid = (left + right) / 2;

		long long v1 = mergeSort(A, left, mid);
		long long v2 = mergeSort(A, mid, right);
		long long v3 = merge(A, left, mid, right);

		return v1 + v2 + v3;
	} else {
		return 0;
	}

}

int main() {

	int n;
	scanf("%d", &n);

	int A[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}
	A[n] = INFTY;

	long long v = mergeSort(A, 0, n);

	cout << v << endl;

	return 0;
}