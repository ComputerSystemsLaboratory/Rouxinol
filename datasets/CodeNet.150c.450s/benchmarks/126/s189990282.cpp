#include<iostream>
#include<queue>
using namespace std;
#include<stdio.h>
int main(void)
{
	while (1)
	{
		int a, b, i,j, n, x, y, m[18][18] = { 0 }, u= 0;
		pair<int, int> g, h;
		queue<pair<int, int> > q;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
		{
			break;
		}
		for (i = 0; i <= a + 1; i++)
		{
			for (j = 0; j <= b + 1; j++)
			{
				if(i==0||i==a+1||j==0||j==b+1)
				{
					m[i][j] = 1;
				}
			}
		}
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			scanf("%d%d", &x, &y);
			m[x][y] = 1;
		}
		g.first = a;
		g.second = b;
		h.first = 1;
		h.second = 1;
		q.push(h);
		while (!q.empty())
		{
			h = q.front();
			q.pop();
			if (m[h.first + 1][h.second] != 1)
			{
				h.first++;
				q.push(h);
				h.first--;
			}
			if (m[h.first][h.second + 1] != 1)
			{
				h.second++;
				q.push(h);
				h.second--;
			}
			if (h == g)
			{
				u++;
			}
		}
		printf("%d\n", u);
	}
	return 0;
}