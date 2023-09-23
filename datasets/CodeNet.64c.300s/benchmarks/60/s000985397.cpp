#include <cstdio>
#include <algorithm>

int a, b, n, map[17][17];

int search(int x, int y)
{
	if (x == 1 && y == 1)
	{
		map[1][1] = 1;
		return 1;
	}

	int left = 0, down = 0;
	if (map[y][x - 1] != -1)
	{
		left = search(x - 1, y);
	}
	if (map[y - 1][x] != -1)
	{
		down = search(x, y - 1);
	}
	map[y][x] = left + down;

	return map[y][x];
}

int main()
{
	while (true)
	{
		for (int i = 0; i <= b; ++i)
		{
			std::fill(map[i], map[i] + a + 1, 0);
		}

		scanf("%d %d", &a, &b);
		if (a == 0 || b == 0)
		{
			break;
		}
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
		{
			int x, y;
			scanf("%d %d", &x, &y);
			map[y][x] = -1;
		}

		std::fill(map[0], map[0] + a + 1, -1);
		for (int i = 0; i <= b; ++i)
		{
			map[i][0] = -1;
		}

		printf("%d\n", search(a, b));
	}
}
