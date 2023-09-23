#include <iostream>

int main()
{
	int r, c;
	std::cin >> r >> c;

	int table[101][101] = { 0 };

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			std::cin >> table[i][j];
			table[i][c] += table[i][j];
			table[r][j] += table[i][j];
			table[r][c] += table[i][j];
		}
	}

	for (int i = 0; i <= r; i++) {
		for (int j = 0; j < c; j++) {
			std::cout << table[i][j] << " ";
		}
		std::cout << table[i][c] << std::endl;
	}
}