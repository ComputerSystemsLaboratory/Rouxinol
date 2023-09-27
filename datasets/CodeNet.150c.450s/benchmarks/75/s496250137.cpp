#include <cstdio>

int H;
void maxHeapify(int A[], int i) {
	int l = 2 * i;
	int r = 2 * i + 1;

	int largest = i;
	if (l <= H && A[l] > A[i])
		largest = l;

	if (r <= H && A[r] > A[largest])
		largest = r;

	if (largest != i) {
		int t = A[i];
		A[i] = A[largest];
		A[largest] = t;
		maxHeapify(A, largest);
	}
}

void buildMaxHeap(int A[]) {
	for (int i = H / 2; i >= 1; --i)
		maxHeapify(A, i);
}

int main() {
	int A[500001];
	scanf("%d", &H);
	for (int i = 1; i <= H; ++i)
		scanf("%d", &A[i]);
	buildMaxHeap(A);
	for (int i = 1; i <= H; ++i)
		printf(" %d", A[i]);
	printf("\n");
	return 0;
}