#include <iostream>

#define LIMIT_SIZE 100


using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;

	int mat[LIMIT_SIZE][LIMIT_SIZE];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mat[i][j];
		}
	}
	int vec[LIMIT_SIZE];
	for (int i = 0; i < m; i++) {
		cin >> vec[i];
	}

	int c[LIMIT_SIZE];
	for (int i = 0; i < n; i++) {
		c[i] = 0;
		for (int j = 0; j < m; j++) {
			c[i] += mat[i][j] * vec[j];
		}
	}

	for (int i = 0; i < n; i++) {
		cout << c[i] << "\n";
	}

	return 0;
}