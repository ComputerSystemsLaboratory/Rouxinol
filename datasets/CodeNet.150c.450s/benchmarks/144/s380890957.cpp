#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
	int n, m, l;
	std::cin >> n >> m >> l;

	std::vector<std::vector<long long>> matA;
	for (int i = 0; i < n; ++i)
	{
		std::vector<long long> vec;
		for (int j = 0; j < m; ++j)
		{
			int val;
			std::cin >> val;
			vec.push_back(val);
		}
		matA.push_back(vec);
	}

	std::vector<std::vector<long long>> matB;
	for (int i = 0; i < m; ++i)
	{
		std::vector<long long> vec;
		for (int j = 0; j < l; ++j)
		{
			int val;
			std::cin >> val;
			vec.push_back(val);
		}
		matB.push_back(vec);
	}

	std::vector<std::vector<long long>> matC;
	for (int i = 0; i < n; ++i)
	{
		std::vector<long long> vec;
		for (int j = 0; j < l; ++j)
		{
			long long val = 0;
			for (int k = 0; k < m; ++k)
			{
				val += (matA[i][k] * matB[k][j]);
			}
			vec.push_back(val);
		}
		matC.push_back(vec);
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < l; ++j)
		{
			std::cout << matC[i][j];

			if (j < l - 1)
			{
				std::cout << " ";
			}
		}

		std::cout << std::endl;
	}

	return 0;
}
