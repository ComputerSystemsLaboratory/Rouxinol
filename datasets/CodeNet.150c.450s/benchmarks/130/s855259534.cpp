#include <iostream>
using namespace std;

int main() {
	int n, m, matrix[100][100], vector[100];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> vector[i];
	}

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			sum += matrix[i][j] * vector[j];
		}
		cout << sum << endl;
	}
}