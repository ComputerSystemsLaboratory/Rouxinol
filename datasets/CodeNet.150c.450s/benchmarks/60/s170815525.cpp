#include <iostream>

using namespace std;

int main() {
	int n, id, k, v, matrix[100][100] = { 0 };
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> id >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			matrix[id - 1][v - 1] = 1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << matrix[i][n - 1] << endl;
	}

	return 0;
}