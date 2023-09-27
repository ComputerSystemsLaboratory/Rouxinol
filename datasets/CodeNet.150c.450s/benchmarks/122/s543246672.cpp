#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int MAX = 2000000;
int S[MAX + 1];
int H = 0;

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
void insert(int S[], int k) {
	++H;
	S[H] = k;

	int i = H;
	while (i > 1 && S[i / 2] < S[i]) {
		swap(S[i / 2], S[i]);
		i = i / 2;
	}

}

int extract(int S[]) {
	int ret = S[1];
	swap(S[1], S[H]);
	--H;
	maxHeapify(S, H, 1);

	return ret;
}

int main() {

	while (1) {
		char order[7];
		scanf("%s", order);

		int k;
		if (strcmp(order, "insert") == 0) {
			scanf("%d", &k);
			insert(S, k);
		} else if (strcmp(order, "extract") == 0) {
			cout << extract(S) << endl;
		} else {
			break;
		}
	}
	return 0;

}