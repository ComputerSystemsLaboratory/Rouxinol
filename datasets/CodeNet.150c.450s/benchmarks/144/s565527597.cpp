#include <iostream>

int main()
{
	int n, m, l;
	std::cin >> n >> m >> l;
	int *matrixA = new int[n * m];
	int *matrixB = new int[m * l];
	long long *matrixC = new long long[n * l];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> matrixA[i*m + j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < l; j++)
		{
			std::cin >> matrixB[i*l + j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			matrixC[i*l + j] = 0;
			for (int k = 0; k < m; k++)
			{
				matrixC[i*l + j] += matrixA[i*m + k] * matrixB[k*l + j];
			}
			if (j > 0)
			{
				std::cout << " ";
			}
			std::cout << matrixC[i*l + j];
		}
		std::cout << '\n';
	}
	delete[] matrixA;
	matrixA = 0;
	delete[] matrixB;
	matrixB = 0;
	delete[] matrixC;
	matrixC = 0;
	return 0;
}