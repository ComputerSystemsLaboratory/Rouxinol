#include<bits/stdc++.h>

using namespace std;

#define int long long

const int dx[8] = { 1, 1, 1, 0, -1, -1, -1, 0 }, dy[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
int W, H;

void DFS(int x, int y, int fld[50][50])
{
	if (fld[y][x] == 0) return;
	fld[y][x] = 0;
	for (int i = 0; i < 8; i++)
	{
		int nx = x + dx[i], ny = y + dy[i];
		if (nx < 0 || W <= nx || ny < 0 || H <= ny) continue;
		DFS(nx, ny, fld);
	}
}

signed main()
{
	while (cin >> W >> H, W || H)
	{
		int fld[50][50];
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				cin >> fld[i][j];
			}
		}

		int cnt = 0;
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				if (fld[i][j] == 1) cnt++;
				DFS(j, i, fld);
			}
		}
		printf("%lld\n", cnt);
	}
}