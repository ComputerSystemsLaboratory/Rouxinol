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
#define _USE_MATH_DEFINES

#include<math.h>
#include<map>

#define SENTINEL 1000000001

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

/*int find(int x) 
{
	if (x == parent[x])return x;
	else 
	{
		return parent[x] = find(parent[x]);
	}
}

bool isSame(int x, int y)
{
	return find(x) == find(y);
}

void unite(int x, int y) 
{
	x = find(x);
	y = find(y);

	if (x == y)return;

	if (Rank[x] < Rank[y]) 
	{
		parent[x] = y;
	}
	else
	{
		parent[y] = x;
		if (Rank[x] == Rank[y])Rank[x]++;
	}
}*/

struct UnionFind
{
	vector<int> parent;
	vector<int> rank;

	UnionFind(int n) :parent(n), rank(n, 0)
	{
		for (int i = 0; i < n; i++)
		{
			parent[i] = i;
		}
	}

	int find(int x)
	{
		if (x == parent[x])
		{
			return x;
		}
		else
		{
			return parent[x] = find(parent[x]);
		}
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

	bool same(int x, int y)
	{
		return find(x) == find(y);
	}
};

struct Edge
{
	int v1, v2, cost;
	Edge(int v1, int v2, int cost) :v1(v1), v2(v2), cost(cost){}
	bool operator<(const Edge& e)const
	{
		return cost < e.cost;
	}
};

int main()
{
	int n;
	cin >> n;

	vector<Edge> e;
	UnionFind uf(n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int c;
			cin >> c;
			if (c != -1)
			{
				e.push_back(Edge(i, j, c));
			}
		}
	}

	sort(e.begin(), e.end());

	int cost = 0;
	for(auto& te:e)
	{
		if (!uf.same(te.v1, te.v2))
		{
			uf.unite(te.v1, te.v2);
			cost += te.cost;
		}
	}

	cout << cost << endl;

	return 0;
}
