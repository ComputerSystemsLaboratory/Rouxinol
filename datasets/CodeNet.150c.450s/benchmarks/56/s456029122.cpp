#include<stdio.h>

int main()
{
	int n, A[10001];
	scanf("%d", &n);
	int i;
	for (i = 0; i <= n - 1; i++)
	{
		scanf("%d ", &A[i]);
	}
	long int min = 1000001, max = -1000001, total = 0;
	for (i = 0; i <= n - 1; i++)
	{
		if (min > A[i]) min = A[i];
		if (max < A[i]) max = A[i];
		total = total + A[i];
	}
	printf("%ld %ld %ld\n", min, max, total);
	return 0;
}