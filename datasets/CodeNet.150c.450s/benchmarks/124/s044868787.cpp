//#define LOCAL

#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

#define rep(a, b) for(int i = a; i <= b; i++)
#define mst(a) memset(a, 0, sizeof(a))

const int MAX = 1e2 + 10;
const int INF = 0x3f3f3f3f;

int g[MAX][MAX];
int dist[MAX];
bool vis[MAX];

void init(int n)
{
	rep(0, n - 1)
	{
		dist[i] = INF;
		for(int j = 0; j < n; j++)
			g[i][j] = INF;
	}
	mst(vis);
	return;
}

void dijkstra(int n)
{
	rep(0, n - 1)
		dist[i] = INF;
	dist[0] = 0;
	rep(0, n - 1)
	{
		int mnidx = -1, mndist = INF;
		for(int j = 0; j < n; j++)
			if(!vis[j] && dist[j] < mndist)
				mnidx = j, mndist = dist[j];
		vis[mnidx] = true;
		for(int j = 0; j < n; j++)
			if(!vis[j])
				dist[j] = min(dist[j], dist[mnidx] + g[mnidx][j]);
	}
	return;
}

int main()
{

#ifdef LOCAL
	freopen("in.txt", "r", stdin);
#endif

	int n;
	while(~scanf("%d", &n))
	{
		init(n);
		rep(0, n - 1)
		{
			int u, v, w, num;
			scanf("%d%d", &u, &num);
			while(num--)
			{
				scanf("%d%d", &v, &w);
				g[u][v] = w;
			}
		}

		dijkstra(n);

		rep(0, n - 1)
			printf("%d %d\n", i, dist[i]);
	}
	return 0;
}

