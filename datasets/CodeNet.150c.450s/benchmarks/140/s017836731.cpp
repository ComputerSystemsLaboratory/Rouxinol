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

struct UnionFind
{
	vector<int> parent;
	vector<int> rank;

	UnionFind(int n) :parent(n, 0), rank(n, 0)
	{
		for (int i = 0; i < n; i++)
		{
			parent[i] = i;
		}
	}

	int find(int x)
	{
		if (x == parent[x])return x;
		else return parent[x] = find(parent[x]);
	}

	bool same(int x, int y)
	{
		return find(x) == find(y);
	}

	void unite(int x, int y)
	{
		x = find(x);
		y = find(y);

		if (x == y)
		{
			return;
		}

		if (rank[x] < rank[y])
		{
			parent[x] = y;
		}
		else
		{
			parent[y] = x;
			if (rank[x] == rank[y])
			{
				rank[x]++;
			}
		}
	}
};

struct OwnEdge
{
	int from, to, cost;
	OwnEdge(int from,int to,int cost):from(from),to(to),cost(cost){}
	OwnEdge():from(-1),to(-1),cost(-1){}

	bool operator<(const OwnEdge& o)const
	{
		return cost < o.cost;
	}
	bool operator>(const OwnEdge& o)const
	{
		return cost > o.cost;
	}
};

int main() 
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int V, E;
	scanf("%d %d", &V, &E);

	priority_queue<OwnEdge, vector<OwnEdge>, greater<OwnEdge>> pq;
	UnionFind uf(V);

	for (int i = 0; i < E; i++)
	{
		int s, t, d;
		scanf("%d %d %d", &s, &t, &d);

		pq.push(OwnEdge(s, t, d));
	}

	int sum = 0;
	while (!pq.empty())
	{
		OwnEdge t = pq.top();
		pq.pop();

		if (!uf.same(t.from, t.to))
		{
			uf.unite(t.from, t.to);
			sum += t.cost;
		}
	}

	printf("%d\n", sum);

	return 0;
}
