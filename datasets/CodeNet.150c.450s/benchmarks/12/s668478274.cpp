#include <stdio.h>
#define N 250
int it = 1, tree[N + 1];
int main() {
	int n, i;
	
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &tree[i]);
		it++;
	}

	for (i = 1; i <= n; i++) {
		printf("node %d: key = %d, ", i, tree[i]);
		if (i / 2 > 0)
			printf("parent key = %d, ", tree[i / 2]);
		if (i * 2 < it)
			printf("left key = %d, ", tree[2 * i]);
		if (i * 2 + 1 < it)
			printf("right key = %d, ", tree[2 * i + 1]);
		printf("\n");
	}
	return 0;
}