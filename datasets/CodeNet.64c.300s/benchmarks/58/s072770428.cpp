#include<stdio.h>
#include<iostream>
using namespace std;
char Map[110][110];
int n, m,sum;
void dfs(int x, int y,char key)
{
	Map[x][y] = '1';
	int dx[] = { 1,-1,0,0 };
	int dy[] = { 0,0,-1,1 };
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < n&&ny >= 0 && ny < m)
		{
			if (Map[nx][ny] == key)
				dfs(nx, ny,key);
		}
	}
}
int main()
{
	//freopen("C:\\Users\\国民党\\Desktop\\text.txt", "r", stdin);
	while (scanf("%d%d", &n, &m), n + m)
	{
		sum = 0;
		for (int i = 0; i < n; i++)
			scanf("%s", &Map[i]);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (Map[i][j] != '1')
				{
					sum++;
					dfs(i, j,Map[i][j]);
				}
			}
		}
		cout << sum << endl;
	}
}