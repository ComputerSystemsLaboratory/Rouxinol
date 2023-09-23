#include<iostream>

using namespace std;

int a[100][100] = {};
int b[100] = {};
int ans[100] = {};

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int k = 0; k < m; k++)
	{
		cin >> b[k];
	}
	//
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ans[i] = ans[i] + a[i][j] * b[j];
		}
	}
	//
	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}