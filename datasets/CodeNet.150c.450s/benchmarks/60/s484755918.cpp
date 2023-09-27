#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	int u, k, n, v;
	int i, j;
	int matrix[102][102] = {0};

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &u);
		scanf("%d", &k);
		for (j = 0; j < k; j++)
		{
			scanf("%d", &v);
			matrix[u][v] = 1;
		}
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j == n)
			{
				printf("%d\n", matrix[i][j]);
			}
			else
			{
				printf("%d ", matrix[i][j]);
			}
		}
	}

	return 0;

}
