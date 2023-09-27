#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
#include <queue>
#include <map>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define REP(i,e) for (int i = 0; i != int(e); i++)
#define FORIT(i, A) for (auto i : A)
#define ISEQ(c) (c).begin(), (c).end()
#define PRINT(x) cout << (x) << endl
#define SZ(x) ((int)(x).size())

int main(int argc, char const *argv[])
{
	int w, h;
	char world[21][21];
	while(1)
	{
		scanf("%d %d", &w, &h);
		if (w == 0 && h == 0) break;
		int sx = -1, sy = -1;
		int memo[20][20];
		memset(memo, 0, 20 * 20 * sizeof(int));
		REP(i, h)
		{
			scanf("%s", world[i]);
			if (sx == -1)
			{
				REP(j, w)
					if (world[i][j] == '@')
					{
						sx = j;
						sy = i;
					}
			}
		}
		std::queue<std::pair<int, int> > q;
		q.push(std::make_pair(sx, sy));
		memo[sy][sx] = 1;
		int area = 0;
		while(!q.empty())
		{
			std::pair<int, int> p = q.front();
			q.pop();
			area++;
			int x = p.first;
			int y = p.second;
			// left
			if (x > 0 && world[y][x-1] == '.' && memo[y][x-1] == 0)
			{
				memo[y][x-1] = 1;
				q.push(make_pair(x-1, y));
			}
			if (x < (w-1) && world[y][x+1] == '.' && memo[y][x+1] == 0)
			{
				memo[y][x+1] = 1;
				q.push(make_pair(x+1, y));
			}
			// up
			if (y > 0 && world[y-1][x] == '.' && memo[y-1][x] == 0)
			{
				memo[y-1][x] = 1;
				q.push(make_pair(x, y-1));
			}
			if (y < (h-1) && world[y+1][x] == '.' && memo[y+1][x] == 0)
			{
				memo[y+1][x] = 1;
				q.push(make_pair(x, y+1));
			}
		}
		printf("%d\n", area);
	}
	return 0;
}