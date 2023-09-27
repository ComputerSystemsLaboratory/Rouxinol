#include <iostream>

void make_mat(int r, int c, long mat[101][101])
{
	for (size_t i = 0; i < r; i++)
		for (size_t j = 0; j < c; j++)
			std::cin >> mat[i][j];
}

int main(int argc, char const* argv[])
{
	int n, m, l;
	std::cin >> n >> m >> l;
	long mat_A[101][101] = {};
	long mat_B[101][101] = {};
	long mat_ret[101][101] = {};

	make_mat(n, m, mat_A);
	make_mat(m, l, mat_B);

	for (size_t i = 0; i < n; i++)
		for (size_t j = 0; j < l; j++)
			for (size_t k = 0; k < m; k++)
				mat_ret[i][j] += mat_A[i][k] * mat_B[k][j];

	for (size_t i = 0; i < n; i++)
		for (size_t j = 0; j < l; j++)
			if (j != l - 1)
				std::cout << mat_ret[i][j] << " ";
			else
				std::cout << mat_ret[i][j] << std::endl;

	return 0;
}