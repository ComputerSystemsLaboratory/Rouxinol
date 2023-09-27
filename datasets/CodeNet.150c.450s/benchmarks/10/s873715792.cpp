#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int info[1001][4];
	int i;
	for (i = 0; i <= n - 1;i++)
	{
		scanf("%d %d %d %d", &info[i][0], &info[i][1], &info[i][2], &info[i][3]);
	}
	int room[12][10] = { 0 };
	int j, k, l, m;
	for (i = 0; i <= n - 1; i++)
	{
		if (info[i][0] == 1)
		{
			j = info[i][1];
			room[j-1][info[i][2]-1] += info[i][3];
		}
		else if (info[i][0]==2)
		{
			j = info[i][1];
			room[j+2][info[i][2]-1] += info[i][3];
		}
		else if (info[i][0]==3)
		{
			j = info[i][1];
			room[j+5][info[i][2]-1] += info[i][3];
		}
		else
		{
			j = info[i][1];
			room[j+8][info[i][2]-1] += info[i][3];
		}
	}
	for (k = 0; k <= 2; k++)
	{
		for (l = 0; l <= 8; l++)
		{
			printf(" %d", room[k][l]);
		}
		printf(" %d\n", room[k][9]);
	}
	printf("####################\n");
	for (k = 3; k <= 5; k++)
	{
		for (l = 0; l <= 8; l++)
		{
			printf(" %d", room[k][l]);
		}
		printf(" %d\n", room[k][9]);
	}
	printf("####################\n");
	for (k = 6; k <= 8; k++)
	{
		for (l = 0; l <= 8; l++)
		{
			printf(" %d", room[k][l]);
		}
		printf(" %d\n", room[k][9]);
	}
	printf("####################\n");
	for (k = 9; k <= 11; k++)
	{
		for (l = 0; l <= 8; l++)
		{
			printf(" %d", room[k][l]);
		}
		printf(" %d\n", room[k][9]);
	}
	return 0;

}