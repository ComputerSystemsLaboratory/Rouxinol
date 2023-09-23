#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

void maxHeapify(int A[], int n, int i) {

	int largest = i;
	int l = i * 2;
	int r = i * 2 + 1;

	if (l <= n && A[l] > A[i])
		largest = l;
	if (r <= n && A[r] > A[largest])
		largest = r;

	if (largest != i) {
		swap(A[i], A[largest]);
		maxHeapify(A, n, largest);
	}
}

void buildMaxHeap(int A[], int n) {
	for (int i = n / 2; i >= 1; --i)
		maxHeapify(A, n, i);
}

int main() {

	int n;
	scanf("%d", &n);

	int H[n + 1];

	for (int i = 1; i <= n; ++i) {
		int key;
		scanf("%d", &key);
		H[i] = key;
	}

	buildMaxHeap(H, n);

	for (int i = 1; i <= n; ++i) {
		cout << " " << H[i];
	}
	cout << endl;

	return 0;
}