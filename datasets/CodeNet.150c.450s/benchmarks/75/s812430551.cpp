#include <stdio.h>
#define N 500000
int it = 0, n, tree[N + 1];

void swapInt(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void maxHeap(int u) {
	int left, right, largest;
	left = u * 2;
	right = u * 2 + 1;

	if (left <= it && tree[u] < tree[left]) 
		largest = left;
	else 
		largest = u;
	if (right <= it && tree[largest] < tree[right])
		largest = right;

	if (largest != u) {
		swapInt(&tree[u], &tree[largest]);
		maxHeap(largest);
	}
}
int main() {
	int i;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &tree[i]);
		it++;
	}

	for (i = it / 2; i >= 1; i--)
		maxHeap(i);

	for (i = 1; i <= n; i++)
		printf(" %d", tree[i]);
	printf("\n");
}