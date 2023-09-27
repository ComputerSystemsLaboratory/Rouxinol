#include<iostream>

using namespace std;

int main() {
	int n, m, i, j;
	cin >> n >> m;
	int A[100][100], b[100], c[100] = {0};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (j = 0; j < m; j++) {
		cin >> b[j];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			c[i] = c[i] + A[i][j] * b[j];
		}
	}
	for (i = 0; i < n; i++)
		cout << c[i] << endl;
}