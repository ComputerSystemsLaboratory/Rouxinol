#include<iostream>
using namespace std;

int main()
{
	int n, m;
	int A[100][100] = { 0 }; //n,m
	int b[100] = { 0 }; //m
	int c[100] = { 0 };

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
		cin >> b[j];
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			c[i] += A[i][j] * b[j];
		}
		cout << c[i] << "\n";
	}
	return 0;
}
