#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;
typedef pair<int, int> P;   //cost, to
static const int INF = 1e9;
static const int SIZE = 101;
int par[SIZE];
int rk[SIZE];
int d[SIZE];
int n;

struct edge
{
	int u, v, cost;
};

struct edge2
{
	int to, cost;
};

bool comp(const edge& e1, const edge& e2)
{
	return(e1.cost < e2.cost);
}

void init()
{
	for (int i = 0; i < SIZE; ++i)
	{
		par[i] = i;
		rk[i] = 0;
	}
}

int find(int x)
{
	if (x == par[x])
	{
		return(x);
	}
	else
	{
		return(par[x] = find(par[x]));
	}
}

void unite(int a, int b)
{
	int x = find(a);
	int y = find(b);
	if (x == y)
	{
		return;
	}
	if (rk[x] < rk[y])
	{
		par[x] = y;
	}
	else
	{
		par[y] = x;
		if (rk[x] == rk[y])
		{
			++rk[x];
		}
	}
}

bool same(int a, int b)
{
	return(find(a) == find(b));
}

int kruskal(vector<edge>& es)
{
	init();
	int res = 0;
	sort(es.begin(), es.end(), comp);
	for (int i = 0; i < es.size(); ++i)
	{
		edge e = es[i];
		if (!same(e.u, e.v))
		{
			unite(e.u, e.v);
			res += e.cost;
		}
	}
	return(res);
}

int prim(vector<edge2>* G)
{
	vector<bool> isUsed(n);
	for (int i = 0; i < n; ++i)
	{
		isUsed[i] = false;
	}
	priority_queue<P, vector<P>, greater<P> > pque;
	P p = make_pair(0, 0);
	pque.push(p);
	int res = 0;
	while (!pque.empty())
	{
		P p = pque.top();
		pque.pop();
		int v = p.second;
		if (isUsed[v])
		{
			continue;
		}
		isUsed[v] = true;
		res += p.first;
		for (int i = 0; i < G[v].size(); ++i)
		{
			edge2 e = G[v][i];
			pque.push(P(e.cost, e.to));
		}
	}
	return(res);
}


void solve()
{
	cin >> n;

// For Kruskal
	//vector<edge> es;
	//for (int i = 0; i < n; ++i)
	//{
	//	for (int j = 0; j < n; ++j)
	//	{
	//		int cost;
	//		cin >> cost;
	//		if (cost != -1)
	//		{
	//			edge e;
	//			e.u = i;
	//			e.v = j;
	//			e.cost = cost;
	//			es.push_back(e);
	//		}
	//	}
	//}
	//cout << kruskal(es) << endl;

// For Prim
	vector<edge2> G[SIZE];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int cost;
			cin >> cost;
			if (j >= i && cost != -1)
			{
				edge2 e1, e2;
				e1.to = j;
				e1.cost = cost;
				e2.to = i;
				e2.cost = cost;
				G[i].push_back(e1);
				G[j].push_back(e2);
			}
		}
	}
	cout << prim(G) << endl;
}

int main()
{
	solve();
	return(0);
}