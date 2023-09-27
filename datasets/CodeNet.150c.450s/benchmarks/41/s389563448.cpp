#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#include<sstream>
#include<stack>
#include<queue>
#include<list>
#include<functional>
#define _USE_MATH_DEFINES

#include<math.h>
#include<map>

#define SENTINEL 1000000001

#define min(a,b) ((a)>(b)?(b):(a))
#define max(a,b) ((a)>(b)?(a):(b))

#define INF 200000000000

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;

struct OwnEdge
{
	ll from, to, cost;
	OwnEdge() :from(-1), to(-1), cost(-1) {}
	OwnEdge(ll from, ll to, ll cost) : from(from), to(to), cost(cost) {}
};

OwnEdge edges[10000];
ll tod[100][100];

int main() 
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int V, E;
	scanf("%d %d", &V, &E);

	for (int i = 0; i < V; i++)for (int j = 0; j < V; j++)
	{
		tod[i][j] = INF;
	}

	for (int i = 0; i < E; i++)
	{
		int s, t, d;
		scanf("%d %d %d", &s, &t, &d);

		edges[i] = OwnEdge(s, t, d);
	}

	for (int k = 0; k < V; k++)
	{
		tod[k][k] = 0;

		bool ns = false;
		for (int i = 0; i < V; i++)
		{
			for (int j = 0; j < E; j++)
			{
				OwnEdge t = edges[j];
				if (tod[k][t.from] != INF&&tod[k][t.to]>(tod[k][t.from] + t.cost))
				{
					tod[k][t.to] = (tod[k][t.from] + t.cost);
					if (i == (V - 1))
					{
						ns = true;
					}
				}
			}
		}
		if (ns)
		{
			printf("NEGATIVE CYCLE\n");
			return 0;
		}
	}

	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			if (j == 0)
			{
				printf(tod[i][j] == INF ? "INF" : "%lld", tod[i][j]);
			}
			else
			{
				printf(tod[i][j] == INF ? " INF" : " %lld", tod[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
