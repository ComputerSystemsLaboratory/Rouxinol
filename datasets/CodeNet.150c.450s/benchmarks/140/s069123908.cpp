#include <cstdio>           // printf(), scanf()
#include <vector>
#include <algorithm>        // sort()

using namespace std;
static const int MAX_E = 100000;

class disjointSet
{
public:
	vector<int> rank;
	vector<int> par;

	disjointSet() {}
	disjointSet(int size)
	{
		rank.resize(size, 0);
		par.resize(size, 0);
		for (int i = 0; i < size; ++i)
		{
			par[i] = i;
			rank[i] = 0;
		}
	}

	int find(int x)
	{
		if (x != par[x])
			par[x] = find(par[x]);

		return par[x];
	}

	void unite(int x, int y)
	{
		x = find(x);
		y = find(y);
		if (x == y)
			return;

		if (rank[x] < rank[y])
			par[x] = y;
		else
		{
			par[y] = x;
			if (rank[x] == rank[y])
				rank[x]++;
		}
	}

	bool same(int x, int y)
	{
		return find(x) == find(y);
	}
};

struct edge
{
	int from, to;
	int cost;
};

edge es[MAX_E];
int V, E;

bool
cmp_func(const edge &e1, const edge &e2)
{
	return e1.cost < e2.cost;
}

int
kruskal()
{
	sort(es, es + E, cmp_func);
	disjointSet dset = disjointSet(V);
	int res = 0;

	for (int i = 0; i < E; ++i)
	{
		edge e = es[i];
		if (!dset.same(e.from, e.to))
		{
			dset.unite(e.from, e.to);
			res += e.cost;
		}
	}

	return res;
}

int
main(int argc, char** argv)
{
	edge e;
	int s, t, w;
	int i;

	scanf("%d %d", &V, &E);
	for (i = 0; i < E; ++i)
	{
		scanf("%d %d %d", &s, &t, &w);
		e.from = s;
		e.to = t;
		e.cost = w;
		es[i] = e;
	}

	printf("%d\n", kruskal());
	return 0;
}