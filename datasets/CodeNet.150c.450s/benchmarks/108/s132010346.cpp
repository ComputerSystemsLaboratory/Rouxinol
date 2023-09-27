#include<stdio.h>

int main(void) {
	int n, a[100][100] = {0}, kyori[100] = {0}, homon1[100] = {0}, homon2[100] = {0}, kyo, u, k, v, i, j, m;
	
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
	
	kyori[0] = 0;
	kyo = 0;
	homon1[0] = 1;
	for (m = 0; m < n; m++)
	{
		for (i = 0; i < n; i++)
		{
			if (homon1[i] == 1 && homon2[i] == 0 && kyori[i] == kyo)
			{
				for (j = 0; j < n; j++)
				{
					if (a[i][j] == 1 && homon1[j] == 0)
					{
						kyori[j] = kyori[i] + 1;
						homon1[j] = 1;
					}
				}
				homon2[i] = 1;
			}
		}
		kyo++;
	}
	
	for (i = 0; i < n; i++)
	{
		if (i != 0 && kyori[i] == 0) kyori[i] = -1;
		printf("%d %d\n", i + 1, kyori[i]);
	}
	
	return 0;
}