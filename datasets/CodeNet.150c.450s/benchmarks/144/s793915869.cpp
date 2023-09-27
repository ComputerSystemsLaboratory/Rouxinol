
#include<iostream>
using namespace std;

int main()
{
	int n,m,l;

	cin >> n >> m >> l;

	int a[101][101] = {};
	int b[101][101] = {};
	long c[101][101] = {};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			for (int k = 0; k < m; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0, k = 0; j < l; j++, k++)
		{
			if (k != 0)
			{
				cout << " ";
			}
			cout << c[i][j];
		}
		cout << endl;
	}

	return 0;
}