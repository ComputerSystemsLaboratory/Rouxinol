#include <iostream>

using namespace std;

#define MAX_H 55
#define MAX_W 55

int W, H;

int C[MAX_H][MAX_W];

int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

void dfs(int x, int y)
{
	if (C[y][x] == 1)
	{
		C[y][x] = 0;

		for (int i = 0; i < 8; i++)
		{
			if (0 <= x + dx[i] && x + dx[i] <= W - 1 && 0 <= y + dy[i] && y + dy[i] <= H - 1)
			{
				if (C[y + dy[i]][x + dx[i]] == 1)
				{
					dfs(x + dx[i], y + dy[i]);
				}
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
				cin >> C[i][j];
			}
		}

		int count = 0;

		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				if (C[i][j] == 1)
				{
					dfs(j, i);

					count++;
				}
			}
		}

		cout << count << endl;
	}

	return 0;
}