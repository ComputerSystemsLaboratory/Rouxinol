#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<map>
#include<queue>
#include<iostream>
#include <iomanip>
#include<string>
#include<math.h>
using namespace std;
const int inf = 0x3f3f3f3f;
int m, n, i, j, k, a, b, d;
int dis[1010][1010],e[1010], r[1010];
void init()
{
	memset(dis, inf, sizeof(dis));
	for (i = 0; i < 1010; i++)
		dis[i][i] = 0;
}
void add(int a, int b, int c)
{
	dis[a][b] = min(dis[a][b], c);
}
void floyd()
{
	for (k = 0; k < n; k++)
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				if (dis[i][j] > dis[i][k] + dis[k][j])
					dis[i][j] = dis[i][k] + dis[k][j];
}
int main()
{
	int x, t, u, v;;
	scanf("%d", &n);
	init();
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &t);
		for (j = 0; j < t; j++)
		{
			scanf("%d %d", &u, &v);
			add(i, u, v);
		}
	}
	floyd();
	for(i=0;i<n;i++)
		printf("%d %d\n",i, dis[0][i]);
	return 0;
}
