#include <cstdio>
#include <iostream>
using namespace std;

int cnt;

void merge(int A[], int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;

	int L[500000];
	int R[500000];
	const int INFTY = 2000000000;
	for (int i = 0; i < n1; ++i)
		L[i] = A[left + i];

	for (int i = 0; i < n2; ++i)
		R[i] = A[mid + i];

	L[n1] = INFTY;
	R[n2] = INFTY;

	int i = 0;
	int j = 0;
	for (int k = left; k < right; ++k) {
		++cnt;
		if (L[i] < R[j]) {
			A[k] = L[i];
			++i;
		} else {
			A[k] = R[j];
			++j;
		}
	}
}

void mergeSort(int A[], int left, int right)
{
	if (left + 1 < right) {
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		merge(A, left, mid, right);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int A[500000];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}
	cnt = 0;
	mergeSort(A, 0, n);
	for (int i = 0; i < n; ++i) {
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << cnt << endl;
}