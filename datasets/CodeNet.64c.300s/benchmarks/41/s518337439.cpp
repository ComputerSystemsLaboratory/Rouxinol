#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstring>

using namespace std;

const double PI = 3.14159265358979;

/*
maxHeapify(A, i)
2      l = left(i)
3      r = right(i)
4      // select the node which has the maximum value
5      if l ≤ H and A[l] > A[i]
6          largest = l
7      else
8          largest = i
9      if r ≤ H and A[r] > A[largest]
10         largest = r
11
12     if largest ≠ i　// value of children is larger than that of i
13         swap A[i] and A[largest]
14         maxHeapify(A, largest) // call recursively
*/

int left(int i) { return i * 2; }
int right(int i) { return i * 2 + 1; }

void maxHeapify(int a[], int len, int i) {
	int l = left(i);
	int r = right(i);
	int largest = -1;
	if (l <= len && a[l] > a[i])
		largest = l;
	else
		largest = i;

	if (r <= len && a[r] > a[largest])
		largest = r;

	if (largest != i) {
		swap(a[i], a[largest]);
		maxHeapify(a, len, largest);
	}
}

/*
1 buildMaxHeap(A)
2    for i = H/2 downto 1
3        maxHeapify(A, i)
*/

void buildMaxHeap(int a[], int len) {
	for (int i = len / 2; i >= 1; i--) {
		maxHeapify(a, len, i);
	}
}

int main() {

	int n;  cin >> n;
	
	int* heap = new int[n + 1];

	for (int i = 1; i <= n; i++)	{
		scanf("%d", &heap[i]);
	}
	buildMaxHeap(heap, n);
	
	for (int i = 1; i <= n; i++) {
		printf(" %d", heap[i]);
	}
	printf("\n");

	delete[] heap;
	return 0;
}

