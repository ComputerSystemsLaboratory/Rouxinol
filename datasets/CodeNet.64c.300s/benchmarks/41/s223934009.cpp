#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <unistd.h>

using namespace std;

typedef long long ll;

void maxHeapify(ll A[], int i, int len) {
	int l = i * 2;
	int r = i * 2 + 1;
	int largest;
	if (l <= len && A[l] > A[i]) {
		largest = l;
	}
	else {
		largest = i;
	}
	if (r <= len && A[r] > A[largest]) {
		largest = r;
	}

	if (largest != i) {
		swap(A[i], A[largest]);
		maxHeapify(A, largest, len);
	}
}

void buildMaxHeap(ll A[], int len) {
	for (int i = len / 2; i >= 1; --i)
		maxHeapify(A, i, len);
}

int main() {
	int n;
	cin >> n;
	ll *nodes = new ll[n+1];
	for (int i = 1; i <= n; ++i)
		cin >> nodes[i];
	buildMaxHeap(nodes, n);
	for (int i = 1; i <= n; ++i)
		cout << " " << nodes[i];
	cout << endl;
	delete[] nodes;
	return 0;
}