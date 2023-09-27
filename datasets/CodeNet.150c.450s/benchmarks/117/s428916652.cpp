#include <cstdio>
#include <iostream>

using namespace std;

int INFTY = 2000000000;
int cnt = 0;

void merge(int A[], int left, int mid, int right) {
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
	for (int k = left; k <= right - 1; ++k) {
		++cnt;
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i = i + 1;
		} else {
			A[k] = R[j];
			j = j + 1;
		}
	}
}

void mergeSort(int A[], int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	int A[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}

	mergeSort(A, 0, n);

	for (int i = 0; i < n; ++i) {
		if (i != 0) {
			cout << " ";
		}
		cout << A[i];
	}
	cout << endl;
	cout << cnt << endl;

	return 0;
}