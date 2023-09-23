#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<stack>
#define INF 40
using namespace std;

char map[102][102];
int h, w;
int ans;
char tree;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

void dfs(int x,int y)
{
	int nx, ny;
	map[x][y] = '.';
	for (int i = 0;i < 4;i++)
	{
		nx = x + dx[i];
		ny = y + dy[i];
		if (map[nx][ny] == tree && nx >= 0 && nx < h && ny >= 0 && ny < w)
		{
			dfs(nx, ny);
		}
	}
	return;
}

int main()
{
	while (~scanf("%d%d",&h,&w))
	{
		getchar();
		ans = 0;
		if (h == 0 && w == 0) break;
		for (int i = 0;i < h;i++)
		{
			for (int j = 0;j < w;j++)
			{
				scanf("%c", &map[i][j]);
			}
			getchar();
		}

		for (int i = 0;i < h;i++)
		{
			for (int j = 0;j < w;j++)
			{
				if (map[i][j] == '#' || map[i][j] == '*' || map[i][j] == '@')
				{
					tree = map[i][j];
					dfs(i, j);
					ans++;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}