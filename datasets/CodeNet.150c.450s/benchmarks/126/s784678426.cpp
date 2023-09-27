#include <stdio.h>

int main()
{
	int a, b, n, map[16][16];

	while(true)
	{
		scanf("%d%d", &a, &b);
		if(a == 0 && b == 0)
			break;
		scanf("%d", &n);
		for(int i = 0; i < a; ++i)
		{
			for(int j = 0; j < b; ++j)
				map[i][j] = 0;
		}
		map[0][0] = 1;

		for(int i = 0; i < n; ++i)
		{
			int x, y;
			scanf("%d%d", &x, &y);
			map[x - 1][y - 1] = -1;
		}

		for(int x = 0; x < a; ++x)
		{
			for(int y = 0; y < b; ++y)
			{
				if(map[x][y] == -1)
					continue;

				if(x != 0 && map[x - 1][y] != -1)
					map[x][y] += map[x - 1][y];
				if(y != 0 && map[x][y - 1] != -1)
					map[x][y] += map[x][y - 1];
			}
		}

		if(map[a - 1][b - 1] == -1)
			map[a - 1][b - 1] = 0;
		printf("%d\n", map[a - 1][b - 1]);
	}

	return 0;
}