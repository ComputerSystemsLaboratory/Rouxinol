#include<iostream>
using namespace std;
char a[105][105];
int n, m;
void dfs(int i,int j)
{
	char s = a[i][j];
	a[i][j] = '.';
	if (a[i + 1][j] == s&&i + 1 < n)
		dfs(i + 1, j);
	if (a[i][j + 1] == s&&j + 1 < m)
		dfs(i, j + 1);
	if (a[i][j - 1] == s&&j - 1 >= 0)
		dfs(i, j - 1);
	if (a[i - 1][j] == s&&i - 1 >= 0)
		dfs(i - 1, j);
}
int main(void)
{

	while (cin >> n >> m)
	{
		int temp = 0;
		if (!n && !m)
			break;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (a[i][j] != '.')
				{
					dfs(i, j);
					temp++;
				}
		cout << temp << endl;
	}
}