#include<iostream>
#include<cstring>
#include<queue>
using namespace std;


struct ST {
	int x;
	int y;
	int c;
};

char map[1000 + 10][1000 + 10];

bool wen[1000 + 10][1000 + 10] = { 0 };

int main()
{
	int ly, lx, n;

	ST m, tm;

	queue<ST> qu;

	int gy[] = {1,0,-1,0};
	int gx[] = {0,1,0,-1};

	char G[10 + 5] = { '0','1','2','3','4','5','6','7','8','9' };

	int sum = 0;
	int sy, sx;
	int i, j;

	cin >> ly >> lx >> n;

	for (i = 1; i <= ly; i++)
	{
		cin >> map[i] + 1;

		map[i][0] = 'X';
		map[i][lx + 1] = 'X';

		for (j = 1; j <= lx; j++)
		{
			if (map[i][j] == 'S')
			{
				sy = i;
				sx = j;
			}
		}
	}
	for (i = 0; i <= lx + 1; i++)
	{
		map[0][i] = 'X';
		map[ly + 1][i] = 'X';
	}

	m.y = sy;
	m.x = sx;
	m.c = 0;

	qu.push(m);

	for (i = 1; i <= n; i++)
	{
		while (!qu.empty())
		{
			m = qu.front();

			qu.pop();

			if (wen[m.y][m.x])
			{
				continue;
			}
			wen[m.y][m.x] = true;

			if (map[m.y][m.x] == G[i])
			{
				sy = m.y;
				sx = m.x;
				sum += m.c;

				while (!qu.empty())
				{
					qu.pop();
				}
				memset(wen, 0, sizeof(wen));

				m.c = 0;

				qu.push(m);

				break;
			}

			for (j = 0; j < 4; j++)
			{
				tm.y = m.y + gy[j];
				tm.x = m.x + gx[j];
				tm.c = m.c + 1;

				if (map[tm.y][tm.x] != 'X' && !wen[tm.y][tm.x] )
				{
					qu.push(tm);
				}
			}
		}
	}

	cout << sum << endl;

	return 0;
}