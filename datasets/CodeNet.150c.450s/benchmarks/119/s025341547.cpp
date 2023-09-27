#include <iostream>
using namespace std;


int w, h;
int ans;
int map[50][50];
int dx[8] = { 0, 0, 1, 1, 1, -1, -1, -1 };
int dy[8] = { 1, -1, 1, 0, -1, 1, 0, -1 };

void solve(int x, int y)
{
	map[x][y] = 0;
	for (int i = 0; i < 8; i++)
	{
		int X = x + dx[i];
		int Y = y + dy[i];
		if (0 <= X && X < w && 0 <= Y && Y < h && map[X][Y] == 1)
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
				if (map[x][y] == 1)
				{
					ans++;
					solve(x, y);
				}
			}
		}

		cout << ans << endl;
	}

	return 0;
}