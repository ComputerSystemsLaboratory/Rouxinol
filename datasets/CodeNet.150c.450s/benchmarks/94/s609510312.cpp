#include<stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	int material[101];
	for (i = 0; i <= n - 1; i++)
	{
		scanf("%d ", &material[i]);
	}
	if (n == 1)
	{
		printf("%d\n", material[0]);
		printf("0\n");
		return 0;
	}
	int j, k, count = 0;
	for (j = 1; j <= n - 1; j++)
	{
		if (material[j]<material[j - 1])
		{
			while ((material[j] >= material[j - 1])==0)
			{
				k = material[j - 1];
				material[j - 1] = material[j];
				material[j] = k;
				count++;
				if (j <= 1) break;
				j-=2;
			}

		}
	}
	int l;
	for (l = 0; l <= n - 2; l++)
	{
		printf("%d ", material[l]);
	}
	printf("%d\n", material[n - 1]);
	printf("%d\n", count);
	return 0;
}