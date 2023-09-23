#include<iostream>

int main()
{
	int r, c;
	int ans[101][101] = { 0 };
	std::cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			std::cin >> ans[i][j];
			int point = ans[i][j];
			ans[i][c] += point;
			ans[r][j] += point;
			ans[r][c] += point;
		}
	}


	for (int i = 0; i <= r; i++) {
		for (int j = 0; j <= c; j++) {
			std::cout << ans[i][j];
			if (j != c)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}