#include <stdio.h>
#define MAX_SIZE 100000
#define SWAP(x,y,temp) ((temp) = (x),(x)=(y),(y) = (temp))

int partition(int list[], int left, int right) //p = left, r = right
{
	int i, j;
	int pivot, temp, low, high;

	pivot = list[right];
	i = left - 1;

	for (j = left; j < right; j++)
	{
		if (list[j] <= pivot)
		{
			i++;
			SWAP(list[i], list[j], temp);
		}
	}
	SWAP(list[i+1],list[j],temp);

	return i + 1;
}

int main()
{
	int i, q,n;
	int list[MAX_SIZE];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &list[i]);

	q = partition(list, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		if (i) printf(" ");
		if (i == q) printf("[");
		printf("%d", list[i]);
		if (i == q) printf("]");
	}
	printf("\n");

	return 0;
}
