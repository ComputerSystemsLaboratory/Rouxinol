#include<iostream>
#include<algorithm>
using namespace std;
int m, n, ans = 0, temp;
int a[15][10005];
void dfs(int d)
{
	int up;
	if (d == m)
	{
		temp = 0;
		for (int j = 0; j < n; j++)
		{
			up = 0;
			for (int i = 0; i < m; i++)
				if (a[i][j])
					up++;
			temp += max(up, m - up);
		}
		ans = max(ans, temp);
		return;
	}
	dfs(d + 1);
	for (int j = 0; j < n; j++)
		if (a[d][j])
			a[d][j] = 0;
		else
			a[d][j] = 1;
	dfs(d + 1);
}
int main(void)
{
	while (cin >> m >> n)
	{
		if (!m)
			break;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		dfs(1);
		cout << ans << endl;
	}
	
}