#include <iostream> 
#include <algorithm>
using namespace std;

int table[102][10002];

int main()
{
	int v[105];
	int w[105];
	int n;
	int m;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i] >> w[i];
	}

	for (int i = 0; i < n + 1; i++)
	{
		for (int j = 0; j < m + 1; j++)
		{
			table[i][j] = -1;
		}
	}

	table[0][0] = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m + 1; j++)
		{
			if (table[i][j] == -1) continue;
			if (j + w[i] < m + 1) table[i + 1][j + w[i]] = table[i][j] + v[i];
			table[i + 1][j] = max(table[i + 1][j], table[i][j]);
		}
	}

	int ans = 0;
	for (int j = 0; j < m + 1; j++)
	{
		ans = max(ans, table[n][j]);
	}
	cout << ans << endl;
}