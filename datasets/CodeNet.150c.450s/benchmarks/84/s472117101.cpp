#include <iostream>

using namespace std;

#define MAX 500000
#define SENTINEL 2e9

int L[MAX / 2 + 2], R[MAX / 2 + 2];

long long merge(int A[], int left, int mid, int right) {
	long long cnt = 0;
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; ++i) L[i] = A[left + i];
	for (int i = 0; i < n2; ++i) R[i] = A[mid + i];
	L[n1] = R[n2] = SENTINEL;
	int i = 0, j = 0;
	for (int k = left; k < right; ++k) {
		if (L[i] <= R[j]) A[k] = L[i++];
		else {
			A[k] = R[j++];
			cnt += n1 - i;
		}
	}
	return cnt;
}

long long mergeSort(int A[], int left, int right) {
	long long res = 0;
	if (left < right - 1) {
		int mid = (left + right) / 2;
		res += mergeSort(A, left, mid);
		res += mergeSort(A, mid, right);
		res += merge(A, left, mid, right);
	}
	return res;
}

int main() {
	int n; cin >> n;
	int A[MAX];
	for (int i = 0; i < n; ++i) cin >> A[i];
	cout << mergeSort(A, 0, n) << endl;

	return 0;
}
