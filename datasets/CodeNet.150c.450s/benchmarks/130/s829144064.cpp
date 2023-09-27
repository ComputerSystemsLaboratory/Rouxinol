#include<stdio.h>

int main()
{
	int m, n;
	scanf("%d %d", &n, &m);
	int A[101][101];
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m - 1; j++)
		{
			scanf("%d ", &A[i - 1][j - 1]);
		}
		scanf("%d\n", &A[i - 1][m - 1]);
	}
	int B[101];
	for (j = 0; j <= m - 1; j++)
	{
		scanf("%d", &B[j]);
	}
	int C[101] = { 0 };
	int k;
	for (i = 0; i <= n - 1; i++)
	{
		for (k = 0; k <= m - 1; k++)
		{
			C[i] += A[i][k] * B[k];
		}
	}
	for (i = 0; i <= n - 1; i++)
	{
		printf("%d\n", C[i]);
	}
}