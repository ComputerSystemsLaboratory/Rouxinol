#include <string.h>
#include<iostream>
#include <algorithm>
#include <sstream>
using namespace std;

int ans = 0;
int m, n;
int mat[10][10000];
int one[10000];

void solve()
{
	ans = 0;
	for (int i = 0; i < (1 << (m + 1)); i++)
	{
		int tmp[10000];
		memcpy(tmp, one, sizeof(one));
		for (int j = 0; j < m; j++)
		{
			if ((i >> j) & 1)
			{
				for (int k = 0; k < n; k++)
					tmp[k] += (mat[j][k] ? -1 : 1);
			}
		}
		int cnt = 0;
		for (int i = 0; i < n; i++)
			cnt += max(tmp[i], m - tmp[i]);
		ans = max(ans, cnt);
	}
}


int main()
{
	while (cin >> m >> n && m && n)
	{
		memset(one, 0, sizeof(one));
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
			{
				cin >> mat[i][j];
				one[j] += mat[i][j];
			}

		solve();
		cout << ans << endl;
	}
}
