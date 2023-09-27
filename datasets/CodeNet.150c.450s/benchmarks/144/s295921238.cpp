#include<iostream>

using namespace std;

int a[101][101] = {};
int b[101][101] = {};
long ans[101][101] = {};

int main()
{
	int n, m, l;
	cin >> n >> m >> l;
	//A
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	//B
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cin >> b[i][j];
		}
	}
	//
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			for (int k = 0; k < m; k++)
			{
				ans[i][j] = ans[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	//
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << ans[i][j];
			if (j != l-1)
			{
				cout << " ";
			}
			else
			{
				cout << endl;
			}
		}
	}


	return 0;
}