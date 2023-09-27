#include<iostream>
using namespace std;

const int INFTY = 1000000001;

int num;

void merge(int A[], int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	int*L = new int[n1 + 1];
	int*R = new int[n2 + 1];
	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}
	L[n1] = INFTY;
	R[n2] = INFTY;
	for (int i = 0, j = 0, k = left; k < right; k++) {
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
			num++;
		}
		else {
			A[k] = R[j];
			j++;
			num++;
		}
	}
	delete[] R;
	delete[] L;
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
	int n = 0;
	cin >> n;
	static int A[500000];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	mergeSort(A, 0, n);
	for (int i = 0; i < n; i++) {
		if (i != n - 1) {
			cout << A[i] << " ";
		}
		else {
			cout << A[i] << endl;
		}
	}
	cout << num << endl;

	return 0;
}