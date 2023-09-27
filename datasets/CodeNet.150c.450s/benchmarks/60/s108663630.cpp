#include <iostream>

int main()
{
	const int Max = 100;
	int matrix[Max][Max] = { 0 };
	int n, m, l;
	int temp;
	
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> m >> l;
		for (int j = 0; j < l; j++) {
			std::cin >> temp;
			matrix[m - 1][temp - 1] = 1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << matrix[i][j];
			if (j != n - 1) {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}

	return 0;
}