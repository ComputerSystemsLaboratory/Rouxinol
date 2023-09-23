#include <iostream>

int main(int argc, char const* argv[])
{
	int r, c;
	int mat[101][101] = {};

	std::cin >> r >> c;
	for (size_t i = 0; i < r; i++)
		for (size_t j = 0; j < c; j++)
		{
			std::cin >> mat[i][j];
			mat[i][c] += mat[i][j];
			mat[r][c] += mat[i][j];
			mat[r][j] += mat[i][j];
		}

	for (size_t i = 0; i < r + 1; i++)
		for (size_t j = 0; j < c + 1; j++)
		{
			if(j != c)
				std::cout << mat[i][j] << " ";
			else
				std::cout << mat[i][j] << std::endl;
		}

	return 0;
}