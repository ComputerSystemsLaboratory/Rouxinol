#include <bits/stdc++.h>
using namespace std;

int w, h;
int c[55][55];

void dfs(int y, int x)
{
	if(c[y][x]==0) return;
	c[y][x] = 0;
	for (int i = -1; i < 2; ++i)
	{
		for (int j = -1; j < 2; ++j)
		{
			if(i==0&&j==0) continue;
			if(y+i>=0&&y+i<h&&x+j>=0&&x+j<w) dfs(y+i, x+j);
		}
	}
	return;
}

int main(int argc, char const *argv[])
{
	while(1)
	{
		cin >> w >> h;
		if(w==0&&h==0) break;
		for (int i = 0; i < h; ++i) for (int j = 0; j < w; ++j) cin >> c[i][j];

		int ans = 0;
		for (int i = 0; i < h; ++i)
		{
			for (int j = 0; j < w; ++j)
			{
				if(c[i][j]==1)
				{
					++ans;
					dfs(i, j);
				} 
			}
		}
		cout << ans << endl;
	}
	return 0;
}
