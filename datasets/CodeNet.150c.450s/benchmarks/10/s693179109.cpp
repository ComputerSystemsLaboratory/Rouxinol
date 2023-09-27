#include <stdio.h>

int main() {
	int official_house[4][3][10] = { 0 };
	int n=0,b=0,f=0,r=0,v=0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &b, &f, &r, &v);
		official_house[b - 1][f - 1][r - 1] += v;


	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				printf(" %d", official_house[i][j][k]);
			}
			printf("\n");
		}
		if (i < 3) {
			for (int l = 0; l < 20; l++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
	return 0;
}