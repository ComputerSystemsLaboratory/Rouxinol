#include <bits/stdc++.h>
using namespace std;

struct card {
	char s;
	int n;
};

int n;
card A[100000], B[100000];
const card MAX = { 'X', 10000 };

void merge(int left, int mid, int right) {
	int n1 = mid - left, n2 = right - mid;
	card L[n1 + 1], R[n1 + 1];
	for (int i = 0; i < n1; i++)
		L[i] = B[left + i];
	for (int i = 0; i < n2; i++)
		R[i] = B[mid + i];
	L[n1] = MAX;
	R[n2] = MAX;
	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		if (L[i].n <= R[j].n) {
			B[k] = L[i];
			i++;
		} else {
			B[k] = R[j];
			j++;
		}
	}
}

void mergesort(int left, int right) {
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergesort(left, mid);
		mergesort(mid, right);
		merge(left, mid, right);
	}
}

int partition(int p, int r) {
	int x = A[r].n;
	int i = p - 1;
	for (int j = p; j < r; j++) {
		if (A[j].n <= x) {
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i + 1], A[r]);
	return i + 1;
}

void quicksort(int p, int r) {
	if (p < r) {
		int q = partition(p, r);
		quicksort(p, q - 1);
		quicksort(q + 1, r);
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i].s >> A[i].n;
		B[i].s = A[i].s;
		B[i].n = A[i].n;
	}
	quicksort(0, n - 1);
	mergesort(0, n);
	for (int i = 0; i < n; i++) {
		if (A[i].s != B[i].s) {
			cout << "Not stable" << endl;
			break;
		} else if (i == n - 1) {
			cout << "Stable" << endl;
		}
	}
	for (int i = 0; i < n; i++)
		cout << A[i].s << " " << A[i].n << endl;
	return 0;
}

