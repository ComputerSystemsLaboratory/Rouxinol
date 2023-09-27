#include<iostream>
#include<algorithm>
using namespace std;
bool s[15][10005] = { 0 };
int ans = 0, n, m;
void dfs(int x)
{
	if (x == n)
	{
		int sum = 0, temp = 0;
		for (int j = 0; j < m; j++)
		{
			for (int i = 0; i < n; i++)
				if (s[i][j] == 1)
					temp++;
			sum += max(temp, n - temp);
			temp = 0;
		}
		ans = max(ans, sum);
		return;
	 }
	dfs(x + 1);
	for (int i = 0; i < m; i++)
		s[x][i] = !s[x][i];
	dfs(x + 1);
}
int main()
{
	while (cin >> n >> m, n, m)
	{
		ans = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> s[i][j];
		dfs(0);
		cout << ans << endl;
	}
	return 0;
}
