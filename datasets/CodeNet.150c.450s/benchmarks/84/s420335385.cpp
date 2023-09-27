#include<iostream>
using namespace std;
void merge(int[], int, int, int);
void mergeSort(int[], int, int);
long long cnt = 0;

int main() {
	int n;
	int A[200001];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	mergeSort(A, 0, n);
	for (int i = 0; i < n; i++) {
		//cerr << A[i] << " ";
	}
	//cerr << endl;
	cout << cnt << endl;
	return 0;
}

void merge(int A[], int left, int mid, int right) {
	int n1 = mid - left;
	int n2 = right - mid;
	int L[n1 + 1], R[n2 + 1];
	for (int i = 0; i < n1; i++) {
		L[i] = A[left + i];
	}
	for (int i = 0; i < n2; i++) {
		R[i] = A[mid + i];
	}
	L[n1] = 2000000000;
	R[n2] = 2000000000;
	int l = 0;
	int r = 0;
	for (int k = left; k < right; k++) {
		if (L[l] <= R[r]) {
			A[k] = L[l];
			l++;
		}
		else {
			A[k] = R[r];
			int k0 = k - left;
			int lr = n1 + r;
			if (lr > k0) cnt += lr - k0;
			r++;

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