#include <stdio.h>

void swap(int*, int*);

int main(void) {
	int i, j;
	int height[10];
	
	for (i = 0; i <= 9; i++)
		scanf("%d", &height[i]);
	
	for (i = 9; i > 0; i--)
		for (j = i; j > 0; j--)
			if (height[j - 1] < height[j])
				swap(&height[j - 1], &height[j]);

	for (i = 0; i < 3; i++)
		printf("%d\n", height[i]);
	return 0;
}

void swap(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
}