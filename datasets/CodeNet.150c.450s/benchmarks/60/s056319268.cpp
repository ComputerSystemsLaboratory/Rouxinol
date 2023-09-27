#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int main()
{
	int num = 0;
	while (scanf("%d",&num)!=EOF)
	{
		int arr[102][102] = { 0 }, ans[102][102] = { 0 };
		for (int i = 0; i < num; i++)
		{
			scanf("%d %d", &arr[i][0], &arr[i][1]);
			int temp = 2;
			for (int j = 0; j < arr[i][1]; j++)
			{
				scanf("%d", &arr[i][temp]);
				temp++;
			}
		}
		for (int i = 0; i < num; i++)
		{
			int temp = 2;
			for (int j = 0; j < arr[i][1]; j++)
			{
				ans[i][arr[i][temp] - 1]++;
				temp++;
			}
			printf("%d", ans[i][0]);
			for (int j = 1; j < num; j++)
			{
				printf(" %d", ans[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
