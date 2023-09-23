#include<stdio.h>

int main()
{
	int r, c;
	scanf("%d %d", &r, &c);
	int i, j, graph[100][100];
	for (i = 0; i <= r-1; i++)
	{
		for (j = 0; j <= c-2; j++)
		{
			scanf("%d ", &graph[i][j]);
		}
		scanf("%d", &graph[i][c - 1]);
	}
	int rtotal[100] = { 0 };
	for (i = 0; i <= r - 1; i++)
	{
		for (j = 0; j <= c - 1; j++)
		{
			rtotal[i] += graph[i][j];
		}
	}
	int ctotal[100] = { 0 };
	for (i = 0; i <= c - 1; i++)
	{
		for (j = 0; j <= r - 1; j++)
		{
			ctotal[i] += graph[j][i];
		}
	}
	for (i = 0; i <= r-1; i++)
	{
		for (j = 0; j <= c-1; j++)
		{
			printf("%d ", graph[i][j]);
		}
		printf("%d\n", rtotal[i]);
	}
	for (i = 0; i <= c - 1; i++)
	{
		printf("%d ", ctotal[i]);
	}
	int all = 0;
	for (i = 0; i <= r - 1; i++)
	{
		all += rtotal[i];
	}
	printf("%d\n", all);

}