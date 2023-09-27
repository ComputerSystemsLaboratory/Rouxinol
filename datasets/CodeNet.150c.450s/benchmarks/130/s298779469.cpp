#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::vector<int>> mat;
	std::vector<int> vec;
	for (int i = 0; i < n; ++i)
	{
		std::vector<int> tmp;
		for (int j = 0; j < m; ++j)
		{
			int v;
			std::cin >> v;
			tmp.push_back(v);
		}
		mat.push_back(tmp);
	}

	for (int i = 0; i < m; ++i)
	{
		int v;
		std::cin >> v;
		vec.push_back(v);
	}

	for (int i = 0; i < n; ++i)
	{
		int v = 0;
		for (int j = 0; j < m; ++j)
		{
			v += mat[i][j] * vec[j];
		}

		std::cout << v << std::endl;
	}

	return 0;
}
