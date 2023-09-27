#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
#define MAX_N 100000
#define MAX_E 100000
int N;
int par[MAX_N];
int r[MAX_N];
void init(int N)
{
	for (int i = 0; i < N; i++)
	{
		par[i] = i;
		r[i] = 0;
	}
}

int root(int x)
{
	if (par[x] == x)
	{
		return x;
	}
	else
	{
		return par[x] = root(par[x]);
	}
}


bool same(int x, int y)
{
	return root(x) == root(y);
}


void unite(int x, int y)
{
	x = root(x);
	y = root(y);
	if (x==y)
	{
		return;
	}
	
	
	if (r[x] < r[y])

	{
		par[x] = y;
	}
	else if(r[x]>r[y])
	{
		par[y] = x;
	}
	else if (r[x] == r[y])
	{
			par[y] = x;
			r[x]++;

	}
	
}

struct edge
{
	int u, v, cost;
};

bool comp(const edge& e1, const edge& e2)
{
	return e1.cost < e2.cost;
}


edge es[MAX_E];
int E;

int Kruskal()
{
	sort(es, es + E, comp);
	init(N);
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
	cin >> N >> E;
	for (int i = 0; i < E; i++)
	{
		cin >> es[i].u >> es[i].v >> es[i].cost;
	}

	cout << Kruskal() << endl;
	return 0;
}





