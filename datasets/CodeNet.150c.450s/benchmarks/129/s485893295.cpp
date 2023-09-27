#include <iostream>
#include <array>

int main(int argc, char const* argv[])
{
	int c,r;
	std::array<std::array<unsigned,101>,101> table{};
	std::cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			std::cin >> table[i][j];
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			table[i][c] += table[i][j];
			table[r][j] += table[i][j];
		}
	}
	for (int j = 0; j < c; j++) {
		table[r][c] += table[r][j];
	}

	for (int i = 0; i <= r; i++) {
		for (int j = 0; j <= c; j++) {
			if (j) {
				std::cout << " ";
			}
			std::cout << table[i][j];
		}
		std::cout << std::endl;
	}

	return 0;
}