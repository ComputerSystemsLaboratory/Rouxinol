#include <iostream>
using namespace std;

int main() {
	int n, m;
	int matrix[100][100] = { 0 };
	int vector[100] = { 0 };
	long output[100] = { 0 };

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> matrix[i][j];

	for (int j = 0; j < m; j++)
		cin>>vector[j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			output[i] += matrix[i][j] * vector[j];
		}
		cout << output[i] << endl;
	}
}