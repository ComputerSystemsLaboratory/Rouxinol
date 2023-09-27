#include <stdio.h>
#include <algorithm>

int a[100000];

int partition(int* a, int p, int r)
{
	int i = p - 1;
	int x = a[r];
	for (int j = p; j < r; j++)
		if (a[j] <= x)
			std::swap(a[++i], a[j]);
	std::swap(a[i + 1], a[r]);
	return i + 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int idx = partition(a, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		if (i > 0)
			printf(" ");
		if (i == idx)
			printf("[%d]", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");

	return 0;
}

