#include<stdio.h>

int main(void) {
	int n, a[100][100] = {0}, u, k, v, i, j;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &u);
		scanf("%d", &k);
		for (j = 0; j < k; j++)
		{
			scanf("%d", &v);
			a[u - 1][v - 1] = 1;
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d", a[i][j]);
			if (j != n - 1) printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}