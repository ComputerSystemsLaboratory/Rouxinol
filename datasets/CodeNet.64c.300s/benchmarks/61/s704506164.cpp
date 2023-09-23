#define		_CRT_SECURE_NO_WARNINGS
#include <cstdio>

#define		MAX			101

int main()
{
	int		r, c;
	scanf("%d %d", &r, &c);

	int		A[MAX][MAX];

	for (int i = 0; i < r; i++)
	{
		int	sum = 0;
		for (int j = 0; j < c; j++)
		{
			scanf("%d", &(A[i][j]));
			sum += A[i][j];
		}
		A[i][c] = sum;
	}

	for (int i = 0; i <= c; i++)
	{
		int	sum = 0;
		for (int j = 0; j < r; j++)
		{
			sum += A[j][i];
		}
		A[r][i] = sum;
	}

	for (int i = 0; i <= r; i++)
	{
		for (int j = 0; j <= c; j++)
		{
			if (j != 0)	printf(" ");
			printf("%d", A[i][j]);
		}
		printf("\n");
	}

	return 0;
}