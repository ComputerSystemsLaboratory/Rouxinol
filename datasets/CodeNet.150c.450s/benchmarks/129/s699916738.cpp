# include <iostream>
# include <vector>

int main() {

	int r, c;
	std::cin >> r >> c;

	std::vector< std::vector<int> > mat;

	mat.resize(r + 1);
	for (int i = 0; i < r + 1; i++) {
		mat[i].resize(c + 1);
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			std::cin >> mat[i][j];
		}
	}

	// anticipating mat[i][c] == 0...
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			mat[i][c] += mat[i][j];
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c+1; j++) {
			mat[r][j] += mat[i][j];
		}
	}

	for (int i = 0; i < r + 1; i++) {
		for (int j = 0; j < c + 1; j++) {
			std::cout << mat[i][j];
			if (j != c)
				std::cout << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}