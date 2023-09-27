#include<iostream>
using namespace std;

int main()
{
	int n, m, l;
	int i, j, k;
	int A[100][100] = { 0 };
	int B[100][100] = { 0 };
	long C[100][100] = { 0 };

	cin >> n >> m >> l;

	//行列Aの値入力
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}
	//行列Bの値入力
	for (j = 0; j < m; j++)
	{
		for (k = 0; k < l; k++)
		{
			cin >> B[j][k];
		}
	}

	//A * B
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < l; k++)
		{
			for (j = 0; j < m; j++)
			{
				C[i][k] += A[i][j] * B[j][k];
			}
			if (k != l - 1) cout << C[i][k] << " ";
			else cout << C[i][k];
		}
		cout << "\n";
	}

	return 0;
}

