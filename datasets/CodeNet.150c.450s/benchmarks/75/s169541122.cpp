#include <bits/stdc++.h>
#define INF 2000000001
#define MAX 1000002
using namespace std;

int H;
int heap[MAX];

void MaxHeapify(int A[], int i) {
	int l = i * 2, r = i * 2 + 1, largest;
	if (l <= H && A[l] > A[i]) {
		largest = l;
	}
	else {
		largest = i;
	}
	if (r <= H && A[r] > A[largest]) {
		largest = r;
	}
	if (largest != i) {
		swap(A[i], A[largest]);
		MaxHeapify(A, largest);
	}
}

void BuildMaxHeap(int A[]) {
	for (int i = H / 2; i >= 1; i--) {
		MaxHeapify(A, i);
	}
}

int main()
{
	cin >> H;
	for (int i = 0; i < MAX; i++) {
		if (i >= 1 && i <= H)
			cin >> heap[i];
		else
			heap[i] = -INF;
	}
	BuildMaxHeap(heap);
	for (int i = 1; i <= H; i++) {
		cout << ' ' << heap[i];
	}
	cout << endl;
	return 0;
}