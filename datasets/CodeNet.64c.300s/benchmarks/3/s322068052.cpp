#include<stdio.h>

int main()
{
	int n, A[101], B[101];
	scanf("%d", &n);
	int i;
	for (i = 0; i <= n - 1 ; i++)
	{
		scanf("%d", &A[i]);
	}
	int j;
	for (j = 0; j <= n - 2; j++)
	{
		B[j] = A[n - 1 - j];
	}
	B[n - 1] = A[0];
	for (j = 0; j <= n - 2; j++)
	{
		printf("%d ", B[j]);
	}
	printf("%d\n", B[n - 1]);
}