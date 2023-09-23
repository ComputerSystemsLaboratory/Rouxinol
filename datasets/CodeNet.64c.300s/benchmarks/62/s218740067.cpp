#include <iostream>

using namespace std;

int main ()
{
	int  n,m,A[100][100],B[100],C[100];
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}


	for (int j = 0; j < m; j++)
	{
		cin >> B[j];
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			C[i] += A[i][j] * B[j];
		}
	}


	for (int i = 0; i < n; i++)
	{
		cout << C[i] << endl;
	}
}