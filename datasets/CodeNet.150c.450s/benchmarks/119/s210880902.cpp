#include <iostream>
#include <deque>
#include <cstdio>
using namespace std;

int dx[] = { 0, 1, 1, 1, 0,-1,-1,-1};
int dy[] = {-1,-1, 0, 1, 1, 1, 0,-1};

int mesh[50][50];
int n, m;

struct Point
{
	int x;
	int y;
};

int main()
{
	deque<Point> stack;
	while (true)
	{
		scanf("%d %d", &n, &m);
		if (n == 0 && m == 0) break;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				int a;
				scanf("%d", &a);
				mesh[i][j] = a;
			}
		}
		int count = 0;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (mesh[i][j] == 1)
				{
					Point pt = {j, i};
					stack.push_front(pt);
					mesh[i][j] = 0;
					while (!stack.empty())
					{
						Point point = stack.front();
						stack.pop_front();
						for (int k = 0; k < 8; k++)
						{
							if (0 <= point.y + dy[k] && point.y + dy[k] < m
								&& 0 <= point.x + dx[k] && point.x + dx[k] < n
								&& mesh[point.y + dy[k]][point.x + dx[k]] == 1)
							{
								Point pt = {point.x + dx[k], point.y+dy[k]};
								stack.push_front(pt);
								mesh[point.y + dy[k]][point.x + dx[k]] = 0;
							}
						}
					}
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
}