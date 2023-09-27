#define		_CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdint>
#include <iostream>

#define		MAX			100

typedef		std::int_least64_t			LL;

int main()
{
	int		n, m, l;
	int		A[MAX][MAX];
	int		B[MAX][MAX];
	LL		C[MAX][MAX];

	scanf("%d %d %d", &n, &m, &l);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &(A[i][j]));
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < l; j++)
		{
			scanf("%d", &(B[i][j]));
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			LL sum = 0;
			for (int k = 0; k < m; k++)
			{
				sum += static_cast<LL>(A[i][k]) * B[k][j];
			}
			C[i][j] = sum;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			if (j)	std::cout << " ";
			std::cout << C[i][j];
		}
		std::cout << "\n";
	}

	return 0;
}