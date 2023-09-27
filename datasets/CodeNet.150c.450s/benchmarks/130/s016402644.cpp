#include <iostream>
using namespace std;
int main()
{

	int n, m;
	int mat1[100][100];
	int mat2[100];
	int result[100];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> mat1[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		cin >> mat2[i];
		result[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			result[i] += mat1[i][j] * mat2[j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << result[i] << endl;
	}
	return 0;
}
