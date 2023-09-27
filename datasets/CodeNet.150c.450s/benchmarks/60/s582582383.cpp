#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<vector<int> > G(n, vector<int>(n));
	for (int i = 0; i < n; ++i)
	{
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; ++j)
		{
			int v;
			cin >> v;
			G[u - 1][v - 1] = 1;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - 1; ++j)
		{
			cout << G[i][j] << " ";
		}
		cout << G[i][n - 1] << endl;
	}
}

int main()
{
	solve();
	return(0);
}