#include<stdio.h>
#include<string.h>
int main(void)
{
	int n, r, p, c;
	int num[1000][50];
	int ans[1000];
	int i, t,k,l;
	int change;
	int re[1000];
	n = r = 1;
	for (i = 0; i < 1000; i++)
	{
	scanf("%d %d", &n, &r);
	if (n == 0 && r == 0)
	{
		break;
	}
	for (t = 0; t < n; t++)
	{
		num[i][t] = n - t;
	}
	for (t = 0; t < r; t++)
	{
	
		scanf("%d %d", &p, &c);
		for (l = 0; l < n ; l++)
		{
			re[l] = num[i][l];
		}
		for (k = 0; k < c; k++)
		{
			change = re[p-1+k];
			num[i][k] = change;
		}
		for (k = 0; k < p - 1; k++)
		{
			change = re[k];
			num[i][c + k] = change;
		}
			
	}
	ans[i] = num[i][0];
	}
	for (t = 0; t < i; t++)
	{
		printf("%d\n", ans[t]);
	}

	
}
