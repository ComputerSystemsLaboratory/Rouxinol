#include <iostream>
using namespace std;

int ans;
int w, h;
char map[20][20];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void solve(int x, int y)
{
	ans++;
	map[x][y] = '#';
	for (int i = 0; i < 4; i++)
	{
		int X = x + dx[i];
		int Y = y + dy[i];
		if (0 <= X && X < w && 0 <= Y && Y < h && map[X][Y] != '#')
		{
			solve(X, Y);
		}
	}
}

int main()
{
	while (cin >> w >> h, w + h)
	{
		ans = 0;
		for (int y = 0; y < h; y++)
		{
			for (int x = 0; x < w; x++)
			{
				cin >> map[x][y];
			}
		}

		for (int y = 0; y < h; y++)
		{
			for (int x = 0; x < w; x++)
			{
				if (map[x][y] == '@') solve(x, y);
			}
		}
		cout << ans << endl;
	}

	return 0;
}