#include<iostream>
using namespace std;
int main()
{
	int n, m, l;
	cin >> n >> m >> l;
	int matrixA[100][100] = { 0 }, matrixB[100][100] = { 0 };
	long matrixC[100][100] = { 0 };
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> matrixA[i][j];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < l; j++)
			cin >> matrixB[i][j];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			for(int k = 0;k < m;k++)
			{
				matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
			}
			if (j != l - 1)
				cout << matrixC[i][j] << " ";
			else
				cout << matrixC[i][j];
		}
		cout << endl;
	}
	return 0;
}
