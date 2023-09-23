#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<queue>
#include<stack>
using namespace std;

static int N;

/*
求某一?公室到其他?公室的最短距?。
多??入，n表示n条?系，下面n次?次?入 x y d表示x到y的距?是d。需要注意的是n没有?定，需要根据?入来求。
?出?公室的?号和距?
*/
static int x, y, distances;
static int n;
//static int vis[100];
static const int INF = 1 << 10;
static int dist[100][100];


void floyd()
{
	for (int k = 0; k <= n; k++)
	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				if (dist[i][k] + dist[k][j] < dist[i][j])
				{
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}


}




int main()
{
	while (scanf("%d", &N) != EOF)
	{
		if (N == 0) break;
		n = -1;
		fill(dist[0], dist[0] + 100 * 100, INF);
		for (int i = 0; i < N; i++)
		{
			scanf("%d%d%d", &x, &y, &distances);
			n = max(n, x);
			n = max(n, y);
			dist[x][y] = dist[y][x] = min(dist[x][y], distances);
		}
		floyd();
		int u = -1, ans = 1<<30, sum = 0;
		for (int i = 0; i <= n; i++)
		{
			sum = 0;
			for (int j = 0; j <= n; j++)
			{
				if (i != j) sum += dist[i][j];
				//printf("j:%d dist:%d", j, dist[i][j]);
			}
			if (sum < ans)
			{
				u = i;
				ans = sum;
			}
			//printf("\ni:%d sum:%d\n", i, sum);
		}

		printf("%d %d\n", u, ans);
	}
	return 0;
}