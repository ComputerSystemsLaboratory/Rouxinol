#include <iostream>

using namespace std;

#define INFTY 1000000001

int count = 0;

void merge(int A[], int left, int mid, int right) {
	int i, j, k;
	int n1 = mid - left;
	int n2 = right - mid;
	int L[n1 + 1], R[n2 + 1];

	for (i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}
	for (i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}
	L[n1] = R[n2] = INFTY;

	i = j = 0;
	for (k = left; k < right; k++) {
		count++;
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		}
		else {
			A[k] = R[j];
			j++;
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
	int n, num[500000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	mergeSort(num, 0, n);

	for (int i = 0; i < n - 1; i++) {
		cout << num[i] << " ";
	}
	cout << num[n - 1] << endl;
	cout << count << endl;

	return 0;
}