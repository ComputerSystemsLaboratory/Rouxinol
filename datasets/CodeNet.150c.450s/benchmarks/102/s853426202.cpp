#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>

#define rep(idx, max)	for(int idx = 0, idx##Max = max; idx < idx##Max; idx ++)
#define rrep(idx, min, max)	for(int idx = min, idx##Max = max; idx <= idx##Max; idx ++)
#define MAX_W	32
#define MAX_H	32

typedef std::vector<int>	VEC;

int	g_map[MAX_W * MAX_H];
int	g_step;

typedef struct _POINT
{
	int x, y;
	_POINT() {}
	_POINT(int _x, int _y) : x(_x), y(_y) {}
} POINT;

enum
{
	RED_BLOCK = -1,
	BLACK_BLOCK = 0,
};

void PrintMap()
{
	rep(y, MAX_H)
	{
		rep(x, MAX_W)
		{
			::printf("%2d|", g_map[MAX_W * y + x]);
		}
		::putchar('\n');
	}
	::putchar('\n');
}

void Solve(POINT &pt, int step)
{
	static int dx[] = { +1, 0, -1, 0};
	static int dy[] = { 0, +1, 0, -1};

	//PrintMap();

	g_map[MAX_W * pt.y + pt.x] = step + 1;
	g_step++;

	rep(i, 4)
	{
		POINT ptn(pt.x + dx[i], pt.y + dy[i]);
		if (g_map[MAX_W * ptn.y + ptn.x] == BLACK_BLOCK)
		{
			Solve(ptn, step + 1);
		}
	}
}

int main(int nArgs, char **lplpszArgs)
{
	int	width, height;
	int	map[MAX_W * MAX_H];

	while (std::cin >> width >> height, width)
	{
		POINT start;

		// Init map info
		rep(y, MAX_H)
		{
			rep(x, MAX_W)
			{
				map[MAX_W * y + x] = RED_BLOCK;
			}
		}

		// Input map info
		rrep(y, 1, height)
		{
			char szLine[0x100];
			::scanf("%s", szLine + 1);
			rrep(x, 1, width)
			{
				switch(szLine[x])
				{
				case '.':	map[MAX_W * y + x] = BLACK_BLOCK;	break;
				case '#':	map[MAX_W * y + x] = RED_BLOCK;	break;
				case '@':
					map[MAX_W * y + x] = BLACK_BLOCK; 
					start = POINT(x, y);
					break;
				}
			}
		}
		//::printf("Start: (%d, %d)\n", start.x, start.y);
		g_step = 0;
		::memcpy(g_map, map, sizeof(map));
		::Solve(start, 0);
		std::cout << g_step << std::endl;
	}
}