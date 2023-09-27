#include <iostream>
#include <algorithm>
using namespace std;
int g[10][10000];
int maxn;
int r, c;
void dfs(int step)
{
	if (step == r)
	{
		int num = 0;
		for (int i = 0; i < c; ++i)
		{
			int res = 0;
			for (int j = 0; j < r; ++j)
				res += g[j][i];
			num += max(res, r - res);
		}
		maxn = max(num, maxn);
	}
	else
	{
		dfs(step + 1);
		for (int j = 0; j < c; ++j)
			g[step][j] = !g[step][j];
		dfs(step + 1);
	}
}
int main()
{
	while (cin >> r >> c&&r&&c)
	{
		for (int i = 0; i < r; ++i)
			for (int j = 0; j < c; ++j)
				cin >> g[i][j];
		maxn = 0;
		dfs(0);
		cout << maxn << endl;
	}
	return 0;
}