#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

typedef struct
{
	int x, y;
}P;

int w, h, n, dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};
char s[1002][1002];
int d[1002][1002];
P a[10], p, q;

int bfs(P st, P ed)
{
	int i, j;
	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			d[i][j] = -1;
	queue<P>que;
	que.push(st);
	d[st.x][st.y] = 0;	
	while (!que.empty())
	{
		p = que.front();
		que.pop();
		if (p.x == ed.x && p.y == ed.y)
			break;	
		for (i = 0; i < 4; i++)
		{
			q.x = dir[i][0] + p.x;
			q.y = dir[i][1] + p.y;
			if (q.x >= 0 && q.x < h && q.y >= 0 && q.y < w && s[q.x][q.y] != 'X' && d[q.x][q.y] == -1)
			{				
				que.push(q);
				d[q.x][q.y] = d[p.x][p.y] + 1;
			}
		}
	}
	return d[p.x][p.y];
}

int main()
{
	int i, j, sum;
	scanf("%d%d%d", &h, &w, &n);
	for (i = 0; i < h; i++)
	{
		scanf("%s", s[i]);
		for (j = 0; j < w; j++)
			if (s[i][j] == 'S')
			{
				a[0].x = i;
				a[0].y = j;
			}
			else if (s[i][j] != '.')
			{
				sum = s[i][j] - '0';
				a[sum].x = i;
				a[sum].y = j;
			}
	}
	for (i = sum = 0; i < n; i++)
		sum += bfs(a[i], a[i + 1]);
	printf("%d\n", sum);
	return 0;
}