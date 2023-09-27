#include <iostream>
using namespace std;

int cnt;

void merge(int A[], int l, int m, int r) {
	int n1 = m - l;
	int n2 = r - m;
	int *L = new int[n1];
	int *R= new int[n2];
	
	for (int i = 0; i < n1; ++i) {
		L[i] = A[l + i];
	}
	for (int i = 0; i < n2; ++i) {
		R[i] = A[m + i];
	}
	int i = 0;
	int j = 0;
	int k = l;
	for (; k < r; ++k) {
		if (i >= n1 || j >= n2) break;
		cnt++;
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		} else { 
			A[k] = R[j];
			j++;
		}
	}
	while (k < r) {
		cnt++;
		if (i < n1) {
			A[k] = L[i];
			i++;
		} else {
			A[k] = R[j];
			j++;
		}
		k++;
	}
	delete[] L;
	delete[] R;
}

void merge_sort(int A[], int l, int r) {
	if (l + 1 < r) {
		int m = (l + r) / 2;
		merge_sort(A, l, m);
		merge_sort(A, m, r);
		merge(A, l, m, r);
	}
}

int main() {
	// your code goes here
	cnt = 0;
	int N;
	cin >> N;
	int* A = new int[N];
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	merge_sort(A, 0, N);
	
	for (int i = 0; i < N; ++i) {
		cout << A[i];
		if (i < N - 1) {
			cout << " ";
		}
	}
	cout << endl;
	cout << cnt << endl;
	delete[] A;
	return 0;
}
