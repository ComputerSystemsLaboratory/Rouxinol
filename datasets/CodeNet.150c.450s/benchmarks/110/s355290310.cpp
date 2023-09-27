/************************************************
* Author        :somniloquy
* Created Time  :2015/10/30 16:15:09
 ************************************************/

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

const int hw_max = 1000 + 5;
char graph[hw_max][hw_max];
int sign[hw_max][hw_max];
int h, w, n, ans;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
struct node
{
	int x;
	int y;
	int time;
} start;

void BFS(node op, char ed)
{
	queue <node> process;
	process.push(op);
	sign[op.x][op.y] = 1;
	while(!process.empty())
	{
		node now = process.front();
		process.pop();
		for(int i = 0; i < 4; i ++)
		{
			node next = now;
			next.x += dx[i];
			next.y += dy[i];
			next.time ++;
			if(next.x >= 0 && next.x < h && next.y >= 0 && next.y < w && graph[next.x][next.y] != 'X' && !sign[next.x][next.y])
			{
				if(graph[next.x][next.y] == ed)
				{
					ans += next.time;
					next.time = 0;
					start = next;
				       	return;
				}
				else
				{
					process.push(next);
					sign[next.x][next.y] = 1;
				}
			}
		}
	}
}

int main()
{
	while(~scanf("%d %d %d", & h, & w, & n))
	{
		getchar();
		for(int i = 0; i < h; i ++)
		{
			for(int j = 0; j < w; j ++)
			{
			       scanf("%c", & graph[i][j]);
			       if(graph[i][j] == 'S')
			       {
					start.x = i;
					start.y = j;
					start.time = 0;
			       }
			}
			getchar();
		}
		ans = 0;
		for(int i = 1; i <= n; i ++)
		{
			memset(sign, 0, sizeof(sign));
			BFS(start, '0' + i);
		}
		printf("%d\n", ans);
	}
	return 0;
}