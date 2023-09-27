#include <cstdio>
int main()
{
	int heap[250];

	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &heap[i]);
	}

	int len = 1;
	int j = 0;
	int k = 0;
	while (k < n) {
		printf("node %d: key = %d, ", k + 1, heap[k]);
		int l = k - j - len / 2 + j / 2;
		if (l >= 0  && k != l)
			printf("parent key = %d, ", heap[l]);
		l = k + len + j;
		if (l < n)
			printf("left key = %d, ", heap[l]);
		l = k + len + j + 1;
		if (l < n)
			printf("right key = %d, ", heap[l]);			
		printf("\n");
		++k;
		++j;
		if (j >= len) {
			len *= 2;
			j = 0;
		}
	}
}