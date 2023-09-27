#include <bits/stdc++.h>
using namespace std;

#define MAX 2000000000

int n, A[200000];
long long cnt = 0;

void merge(int left, int mid, int right) {
	int n1 = mid - left, n2 = right - mid;
	int L[n1 + 1], R[n1 + 1];
	for (int i = 0; i < n1; i++)
		L[i] = A[left + i];
	for (int i = 0; i < n2; i++)
		R[i] = A[mid + i];
	L[n1] = MAX;
	R[n2] = MAX;
	int i = 0, j = 0;
	for (int k = left; k < right; k++) {
		if (L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		} else {
			A[k] = R[j];
			j++;
			cnt += n1 - i;
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

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	mergesort(0, n);
	cout << cnt << endl;
	return 0;
}

