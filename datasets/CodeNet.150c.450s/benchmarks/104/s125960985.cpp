#include<stdio.h>

void swap(int*, int*);

int main()
{
	int num[31], w, n, i;
	scanf("%d", &w);
	for (i = 0; i < w; i++)
	{
		num[i] = i + 1;
	}
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int a, b;
		scanf("%d,%d", &a, &b);
		swap(&num[a - 1], &num[b - 1]);
	}
	for (i = 0; i < w; i++)
	{
		printf("%d\n", num[i]);
	}
	return 0;
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}