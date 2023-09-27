#include <iostream>
using namespace std;
 
#define MAX_W 100
#define MAX_H 100
char farm[MAX_W][MAX_H];
int W, H;
const int direction[4][2] = {
	{ -1, 0 },
	{ 1, 0 },
	{ 0, -1 },
	{ 0, 1 },
};
 
void dfs(const int& x, const int& y, const char tree)
{
	farm[x][y] = 'x';
	for (int i = 0; i < 4; ++i)
	{
		int nx = x + direction[i][0];
		int ny = y + direction[i][1];
		if (nx >= 0 && nx < W && ny >= 0 && ny < H && farm[nx][ny] == tree)
		{
			dfs(nx, ny, tree);
		}
	}
}
 
///////////////////////////SubMain//////////////////////////////////
int main(int argc, char *argv[])
{
 
	while (cin >> H >> W, W > 0)
	{
		int res = 0;
		int x, y;
		for (y = 0; y < H; ++y)
		{
			for (x = 0; x < W; ++x)
			{
				cin >> farm[x][y];
			}
		}
 
		for (y = 0; y < H; ++y)
		{
			for (x = 0; x < W; ++x)
			{
				if (farm[x][y] != 'x')
				{
					dfs(x, y, farm[x][y]);
					++res;
				}
			}
		}
		cout << res << endl;
	}
 
	return 0;
}
