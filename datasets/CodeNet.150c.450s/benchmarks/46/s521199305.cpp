#include<stdio.h>

int main()
{
	while (1)
	{
		int n, x;
		scanf("%d %d", &n, &x);
		if (n == 0 && x == 0) break;
		int i, j, k, total, ways=0;
		for (i = 1; i <= n - 2; i++)
		{
			for (j = i + 1; j <= n - 1; j++)
			{
				for (k = j + 1; k <= n; k++)
				{
					total = i + j + k;
					if (total == x) ways += 1;
				}
			}
		}
		printf("%d\n", ways);
	}
	return 0;
}