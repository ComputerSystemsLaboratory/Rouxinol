#include<iostream>
using namespace  std;
int H, W,ans;
int dy[] = {0,0,1,-1};
int dx[] = {1,-1,0,0};
char field[100][100];
bool used[100][100];
bool in(int y, int x)
{
	if (y < 0 || x < 0 || y >= H || x >= W)return false;
	return true;
}
void dfs(int y, int x)
{
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (!in(ny, nx))continue;
		if (field[ny][nx] != field[y][x])continue;
		if (used[ny][nx])continue;
		used[ny][nx] = true;
		dfs(ny, nx);
	}
	return;
}
int main()
{
	while (cin >> H >> W && H != 0 || W != 0)
	{
		ans = 0;
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				used[i][j] = false;
			}
		}
		for (int i = 0; i < H; i++)
		{
			cin >> field[i];
		}

		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				if (used[i][j])continue;
				used[i][j] = true;
				dfs(i, j);
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}