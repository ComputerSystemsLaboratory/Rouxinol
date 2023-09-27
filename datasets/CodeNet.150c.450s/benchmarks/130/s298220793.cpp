#define		_CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main()
{
	int		n, m;
	scanf("%d", &n);
	scanf("%d", &m);

	int		A[100][100];
	int		B[100];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &(A[i][j]));
		}
	}

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &(B[i]));
	}

	for (int i = 0; i < n; i++)
	{
		int		sum = 0;
		for (int j = 0; j < m; j++)
		{
			sum += A[i][j] * B[j];
		}
		printf("%d\n", sum);
	}

	return 0;
}