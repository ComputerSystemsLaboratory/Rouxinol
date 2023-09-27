#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 500000
#define SENTINEL 2e9

struct card {
	int value;
	char suit;
};

card L[MAX / 2 + 2], R[MAX / 2 + 2];

void merge(card A[], int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; ++i) L[i] = A[left + i];
	for (int i = 0; i < n2; ++i) R[i] = A[mid + i];
	L[n1].value = R[n2].value = SENTINEL;
	int i = 0, j = 0;
	for (int k = left; k < right; ++k) {
		if (L[i].value <= R[j].value) A[k] = L[i++];
		else A[k] = R[j++];
	}
}

void mergeSort(card A[], int left, int right) {
	if (left < right - 1) {
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int partition(card A[], int p, int r) {
	card x = A[r];
	int i = p - 1;
	for (int j = p; j < r; ++j) {
		if (A[j].value <= x.value) {
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

void quickSort(card A[], int p, int r) {
	if (p < r) {
		int q = partition(A, p, r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
	}
}

card A[100000], B[100000];

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> A[i].suit >> A[i].value;
		B[i] = A[i];
	}
	mergeSort(A, 0, n);
	quickSort(B, 0, n - 1);
	bool flag = true;
	for (int i = 0; i < n; ++i)
		if (A[i].suit != B[i].suit) flag = false;
	cout << (flag ? "Stable" : "Not stable") << endl;
	for (int i = 0; i < n; ++i)	cout << B[i].suit << " " << B[i].value << endl;

	return 0;
}
