#include <iostream>
using namespace std;

void dfs(char a[][101],int m, int n,int x, int y, char test)
{
	if (a[x][y] == test&&x >= 0 && y >= 0 && x < m&&y < n)
	{
		a[x][y] = '0';
		dfs(a, m, n, x, y-1,test);
		dfs(a, m, n, x, y+1,test);
		dfs(a, m, n, x-1, y,test);
		dfs(a, m, n, x+1, y,test);
	}
}

int main()
{
	int m, n, i, j;
	while (cin >> m >> n)
	{
		if (m == 0 && n == 0)
			break;
		char a[101][101];
		int count = 0;
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
				cin >> a[i][j];
		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
			{
				if (a[i][j] != '0')
				{
					dfs(a, m, n, i, j, a[i][j]);
					count++;
				}
			}
		cout << count << endl;
	}
    return 0;
}