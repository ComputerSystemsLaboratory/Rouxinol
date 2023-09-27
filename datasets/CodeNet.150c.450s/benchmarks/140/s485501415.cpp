//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A&lang=jp
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 100000
#define MAX_E 100000

int par[MAX], rank_[MAX];

void init(int N)
{
	for(int i=0;i<N;i++)

	{
		par[i] = i;
		rank_[i] = 0;
	}
}

int find(int x)
{
	if (par[x] == x)
	{
		return x;

	}
	return par[x] = find(par[x]);

}

void unite(int x, int y)
{
	x = find(x);
	y = find(y);
	if (x == y)
	{
		return;
	}

	if (rank_[x] < rank_[y])
	{
		par[x] = y;
	}
	else
	{
		par[y] = x;
	}
	if (rank_[x] == rank_[y])
	{
		rank_[x]++;
	}
}


bool same(int x, int y)
{
	return find(x) == find(y);
}

struct edge
{
	int u, v, cost;
};

bool comp(const edge &e1, const edge &e2)
{
	return e1.cost < e2.cost;
}

int V, E;
edge es[MAX_E];

int kruskal()
{
	sort(es, es + E, comp);
	init(V);
	int res = 0;
	for (int i = 0; i < E; i++)
	{
		if (!same(es[i].u, es[i].v))
		{
			unite(es[i].u, es[i].v);
			res += es[i].cost;
				
		}
	}
	return res;
}

int main()
{
	cin >> V >> E;
	for (int i = 0; i < E; i++)
	{
		cin >> es[i].u >> es[i].v >> es[i].cost;
	}
	cout << kruskal() << endl;
	return 0;
	
}




