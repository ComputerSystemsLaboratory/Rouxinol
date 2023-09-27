#include <cmath>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 105;
const int M = 10005;

const long long lim = 2000000000;
const long long inf = 0x3f3f3f3f3f3f3f3f;

long long G[N][N];

long long min(int a, long long b)
{
	return a < b ? a : b;
}

signed main(void)
{
	int n, m; cin >> n >> m;

	memset(G, 0x3f, sizeof(G));

	for (int i = 0; i < N; ++i)G[i][i] = 0;

	for (int i = 1; i <= m; ++i)
	{
		int x, y, w;
		cin >> x >> y >> w;
		G[x][y] = min(G[x][y], w);
	}

	for (int k = 0; k < n; ++k)
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				if (G[i][j] > G[i][k] + G[k][j])
					G[i][j] = G[i][k] + G[k][j];

	for (int i = 0; i < N; ++i)if (G[i][i] < 0)
		return cout << "NEGATIVE CYCLE" << endl, 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - 1; ++j)
			if (G[i][j] <= lim)
				cout << G[i][j] << " ";
			else cout << "INF ";
		if (G[i][n - 1] <= lim)
			cout << G[i][n - 1] << endl;
		else cout << "INF" << endl;
	}
}