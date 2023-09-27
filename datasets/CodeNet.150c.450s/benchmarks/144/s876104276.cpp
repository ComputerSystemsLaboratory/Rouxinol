#include<stdio.h>

int main()
{
	long int A[101][101], B[101][101], C[101][101] = { 0 };
	int l, m, n;
	scanf("%d %d %d", &l, &m, &n);
	int h, i, j, k, g;
	for (i = 0; i <= l - 1; i++)
	{
		for (j = 0; j <= m - 2; j++)
		{
			scanf("%d ", &A[i][j]);
		}
		scanf("%d", &A[i][m - 1]);
	}
	for (i = 0; i <= m - 1; i++)
	{
		for (j = 0; j <= n - 2; j++)
		{
			scanf("%d ", &B[i][j]);
		}
		scanf("%d", &B[i][n - 1]);
	}
	for (h = 0; h <= l - 1; h++)
	{
		for (j = 0; j <= n - 1; j++)
		{
			for (k = 0; k <= m - 1; k++)
			{
				C[h][j] += A[h][k] * B[k][j];
			}
		}
	}
	for (i = 0; i <= l - 1; i++)
	{
		for (j = 0; j <= n - 2; j++)
		{
			printf("%ld ", C[i][j]);
		}
		printf("%ld\n", C[i][n - 1]);
	}
	return 0;
}