#include <iostream>
using namespace std;

char Map[100][100];
int H, W;
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

void solve(int x, int y, char c)
{
	Map[x][y] = -1;
	for (int i = 0; i < 4; i++)
	{
		int X = x + dx[i];
		int Y = y + dy[i];
		if (0 <= X && X < W && 0 <= Y && Y < H && Map[X][Y] == c)
		{
			solve(X, Y, c);
		}
	}
}


int main()
{
	while (cin >> H >> W, H + W)
	{
		int count = 0;
		for (int y = 0; y < H; y++)
		{
			for (int x = 0; x < W; x++)
			{
				cin >> Map[x][y];
			}
		}

		for (int y = 0; y < H; y++)
		{
			for (int x = 0; x < W; x++)
			{
				if (Map[x][y] == -1) continue;
				count++;
				solve(x, y, Map[x][y]);
			}
		}

		cout << count << endl;
	}

	return 0;
}