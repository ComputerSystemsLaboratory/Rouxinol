#include <iostream>

int main()
{
	int n, m;
	std::cin >> n >> m;
	int *matrix = new int[n*m];
	int *vector = new int[m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> matrix[(i*m) + j];
		}
	}
	for (int j = 0; j < m; j++)
	{
		std::cin >> vector[j];
	}
	for (int i = 0; i < n; i++)
	{
		int result_i = 0;
		for (int j = 0; j < m; j++)
		{
			result_i += matrix[(i*m) + j] * vector[j];
		}
		std::cout << result_i << '\n';
	}
	delete[] matrix;
	delete[] vector;
	return 0;
}