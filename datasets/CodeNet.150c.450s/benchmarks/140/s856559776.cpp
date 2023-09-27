#include <iostream>
#include <algorithm>
using namespace std;

const int E = 100000;
int par[E], rank1[E];
struct Edge { int u, v, cost; };

bool comp(const Edge& e1, const Edge& e2){
	return e1.cost < e2.cost;
}

Edge edge[E];

void init(int n)
{
	for(int i = 0; i < n; ++i){
		par[i] = i;
		rank1[i] = 0;
	}
}

int find(int x)
{
	if(x == par[x])
		return x;
	else
		return par[x] = find(par[x]);
}

void unite(int x, int y)
{
	x = find(x);
	y = find(y);
	if(x == y) return;
	
	if(rank1[x] > rank1[y])
		par[y] = x;
	else {
		par[x] = y;
		if(rank1[x] == rank1[y])
			rank1[x] ++;
	}
}

bool same(int x, int y)
{
	return find(x) == find(y);
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	int v, e;
	cin >> v >> e;
	init(v);
	
	int s, t, w;
	for(int i = 0; i < e; ++i){
		cin >> s >> t >> w;
		edge[i] = Edge{ s, t, w };
	}
	
	sort(edge, edge + e, comp);
	
	int ans = 0;
	for(int i = 0; i < e; ++i){
		Edge e1 = edge[i];
		if(!same(e1.u, e1.v)){
			unite(e1.u, e1.v);
			ans += e1.cost;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}