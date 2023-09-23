#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	int r, c;
	int matrix[101][101] = {};

	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> matrix[i][j];
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			matrix[i][c] += matrix[i][j];
		}
	}

	for (int j = 0; j < c + 1; j++) {
		for (int i = 0; i < r; i++) {
			matrix[r][j] += matrix[i][j];
		}
	}


	for (int i = 0; i < r + 1; i++) {
		for (int j = 0; j < c + 1; j++) {
			printf("%d", matrix[i][j]);

			if (j != c) cout << " ";
		}
		cout << endl;
	}

	return 0;
}