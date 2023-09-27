#include <iostream>
#include <string.h>

using namespace std;
char Field[52][52];
int w, h;

void DFS(int y, int x)
{
	Field[y][x] = 0;
	for(int i = -1; i <= 1; ++i)
	{
		for(int j = -1; j <= 1; ++j)
		{
			int X = x + j;
			int Y = y + i;
			if((0 < X && X <= w) && (0 < Y && Y <= h) && Field[Y][X] == '1')
			{
				DFS(Y, X);
			}
		}
	}
}

void solve()
{
	while(cin >> w >> h, w || h)
	{
		memset(Field, 0, sizeof(Field));
		for(int i = 1; i <= h; ++i)
		{
			for(int j = 1; j <= w; ++j)
			{
				cin >> Field[i][j];
			}
		}

		int count = 0;
		for(int i = 1; i <= h; ++i)
		{
			for(int j = 1; j <= w; ++j)
			{
				if(Field[i][j] == '1')
				{
					count++;
					DFS(i, j);
				}
			}
		}
		cout << count << endl;
	}
}

int main()
{
	solve();
	return(0);
}