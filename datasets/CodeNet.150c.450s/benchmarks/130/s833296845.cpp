#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> v[i][j];
		}
	}
	vector<int> x(m);
	for (int i = 0; i < m; i++)
	{
		cin >> x[i];
	}
	vector<int> ans(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ans[i] += v[i][j] * x[j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}