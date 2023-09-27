#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, l;
	cin >> n >> m >> l;
	vector<vector<long long int>> v1(n, vector<long long int>(m, 0));
	vector < vector<long long int>> v2(m, vector<long long int>(l, 0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> v1[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cin >> v2[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++)
		{
			long long int acc = 0;
			for (int k = 0; k < m; k++)
			{
				acc += v1[i][k] * v2[k][j];
			}
			string s = (j == l - 1) ? "\n" : " ";
			cout << acc << s;
		}
	}

	return 0;
}