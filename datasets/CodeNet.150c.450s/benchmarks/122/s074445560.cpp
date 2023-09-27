#include <stdio.h>
#include <string.h>
#define N 2000000
int it = 0, n, tree[N + 1];
void swap(int *x, int *y) {
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
		swap(&tree[u], &tree[largest]);
		maxHeap(largest);
	}
}
void insert(int key) {

	tree[++it] = key;
	int parent = it / 2;
	int u = it;
	while (u > 1 && tree[u] > tree[parent]) {
		swap(&tree[u], &tree[parent]);
		u = parent;
		parent = u / 2;

	}
}
int extract(void) {
	int rtn = tree[1];
	tree[1] = tree[it--];
	maxHeap(1);
	return rtn;
}
int main() {
	int in;
	char command[8];

	while (1) {
		scanf("%s", command);
		if (strcmp(command, "end") == 0)
			break;
		if ('e' == command[0])
			printf("%d\n", extract());
		else {
			scanf("%d", &in);
			insert(in);
		}
	}
	return 0;
}