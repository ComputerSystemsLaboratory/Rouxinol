#include "iostream"
#include "string"

int main()
{
	int r, c;
	int sum = 0;
	int sheet[101][101] = { 0 };
	std::cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			std::cin >> sheet[i][j];
			sheet[r][j] += sheet[i][j];
			sum += sheet[i][j];
		}
	}

	for (int j = 0; j < c; j++)
		for (int i = 0; i < r; i++)
			sheet[i][c] += sheet[i][j];

	sheet[r][c] = sum;

	for (int i = 0; i <= r; i++) {
		for (int j = 0; j <= c; j++) {
			if (j < c)
				std::cout << sheet[i][j] << " ";
			else
				std::cout << sheet[i][j];
		}
		std::cout << std::endl;
	}
    return 0;
}