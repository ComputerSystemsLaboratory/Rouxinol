#include<stdio.h>
#include<iostream>
#include<queue>
#include<map>
#include<string>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;

typedef long long ll;	
typedef pair<int, int> P;
const int maxn = 102;
const int inf = 0x3f3f3f3f;
char a[maxn][maxn];
int vis[maxn][maxn];
int dre[4][2] = { 0,1,1,0,0,-1,-1,0 };
int n, m;

void init()
{
	memset(vis, 0, sizeof(vis));
}

void DFS(int x, int y)
{
	vis[x][y] = 1;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dre[i][0], ny = y + dre[i][1];
		//cout << " " << nx << " " << ny << endl;
		if (nx >= 0 && nx < n&&ny >= 0 && ny < m && a[nx][ny] == a[x][y] &&!vis[nx][ny])
			DFS(nx, ny);
	}
	return;
}

int main()
{

	while (scanf("%d%d", &n, &m), m || m)
	{
		init();
		int ans = 0;
		for (int i = 0; i < n; i++)
			scanf("%s", &a[i]);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (!vis[i][j])
				{
					DFS(i,j);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}

