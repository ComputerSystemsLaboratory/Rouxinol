#include <iostream>

using namespace std;

#define MAX_H 22
#define MAX_W 22

int W, H, X, Y, A;

char tile[MAX_H][MAX_W];

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

void dfs(int x, int y)
{
	tile[y][x] = '@';

	for (int i = 0; i < 4; i++)
	{
		if (0 <= x + dx[i] && x + dx[i] <= W - 1 && 0 <= y + dy[i] && y + dy[i] <= H - 1)
		{
			if (tile[y + dy[i]][x + dx[i]] == '.')
			{
				dfs(x + dx[i], y + dy[i]);
			}
		}
	}
}

int main()
{
	while (true)
	{
		cin >> W >> H;

		if (W == 0 && H == 0) { break; }

		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				cin >> tile[i][j];

				if (tile[i][j] == '@')
				{
					X = j;
					Y = i;
				}
			}
		}

		dfs(X, Y);

		A = 0;

		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				if (tile[i][j] == '@')
				{
					A++;
				}
			}
		}

		cout << A << endl;
	}

	return 0;
}