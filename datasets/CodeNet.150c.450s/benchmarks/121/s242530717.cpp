#include<iostream>
using namespace std;
char map[101][101];
int vis[101][101];
int ans;
int H, W;
void dfs(int x, int y,char c)
{
	if (c != map[x][y])
		return;
	if (vis[x][y])
		return;
	vis[x][y] = 1;
	if (x > 0) dfs(x - 1, y, map[x][y]);
	if (x < H - 1) dfs(x + 1, y, map[x][y]);
	if (y > 0) dfs(x, y - 1, map[x][y]);
	if (y < W - 1) dfs(x, y + 1, map[x][y]);
}
int main()
{
	while (cin >> H >> W&&H&&W)
	{
		ans = 0;
		for (int i = 0; i < H; ++i)
			for (int j = 0; j < W; ++j)
			{
				cin >> map[i][j];
				vis[i][j] = 0;
			}
		for (int i = 0; i < H; ++i)
			for (int j = 0; j < W; ++j)
				if (!vis[i][j])
				{
					dfs(i, j, map[i][j]);
					ans++;
				}
		cout << ans << endl;
	}
	return 0;
}