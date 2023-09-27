#include<stdio.h>

int main(void)
{
	int n, p;
	int i, t, k;
	int num[1000][50];
	int wan[1000];
	int ans[1000];
	int lose;
	int change;
	for (i = 0; i < 1000; i++)
	{
		lose = 0;
		scanf("%d %d", &n, &p);
		if (n == 0 && p == 0)
		{
			break;
		}
		for (t = 0; t < n; t++)
		{
			num[i][t] = 0;
		}
		wan[i] = p;
		while (1)
		{
			if (lose == n - 1)
			{
				break;
			}
			
			for (t = 0; t < n; t++)
			{
				lose = 0;
				if (wan[i] == 0)
				{
				
					if (num[i][t] == 0)
					{
						continue;
					}
					else if (num[i][t] != 0)
					{
					
						change = num[i][t];
						wan[i] = change;
						num[i][t] = 0;
						continue;
					}
				}

				wan[i]--;
				num[i][t]++;
				if (wan[i] == 0)
				{
					for (k = 0; k < n; k++)
					{
						if (num[i][k] == 0)
						{
							lose++;
						}
					
					}
				}
				if (lose == n - 1)
				{
					break;
				}
			}
		}
		for (t = 0; t < n; t++)
		{
			if (num[i][t] != 0)
			{
				ans[i] = t;
				if (ans[i] == -1)
				{
					ans[i] = n - 1;
				}
			}
		}
	}
	for (k = 0; k < i; k++)
	{
		printf("%d\n", ans[k]);
	}
	return 0;
}
