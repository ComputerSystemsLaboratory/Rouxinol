#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	int matrix[100][100];
	int vector[100];
	int answer[100];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> matrix[i][j];
	for (int i = 0; i < m; i++)
		cin >> vector[i];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			answer[i] += matrix[i][j] * vector[j];

	for (int i = 0; i < n; i++)
		cout << answer[i] << endl;
	return 0;
}

