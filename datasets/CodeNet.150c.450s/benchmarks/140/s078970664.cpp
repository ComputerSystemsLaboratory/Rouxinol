#include <bits/stdc++.h>
//#include <math.h>
using namespace std;

#define INF 1.1e9
#define LINF 1.1e18
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define BIT(x,n) bitset<n>(x)
#define PI 3.14159265358979323846

typedef long long ll;
//typedef pair<int,int> P;
//typedef pair<int,P> PP;

//-----------------------------------------------------------------------------

template< typename T >
struct Edge {
	int from,to;
	T cost;

	Edge(int to,T cost):from(-1),to(to),cost(cost) {}
	Edge(int from,int to,T cost):from(from),to(to),cost(cost) {}
};

template< typename T >
using Edges=vector< Edge<T> >;

template< typename T >
using WeightedGraph=vector< Edges<T> >;

template< typename T >
T prim(WeightedGraph<T> &G) {
	using P=pair<T,int>;

	T res=0;
	vector<bool> visited((int)G.size(),false);
	priority_queue< P,vector<P>,greater<P> > Q;
	Q.emplace(0,0);
	while(!Q.empty()) {
		P p=Q.top();Q.pop();
		int v=p.second;
		if(visited[v]) continue;
		visited[v]=true;
		res+=p.first;
		for(auto e:G[v]) Q.emplace(e.cost,e.to);
	}
	return res;
}

using Weight=long long;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int V,E;
	cin>>V>>E;
	WeightedGraph<Weight> G(V);
	for(int i=0;i<E;i++) {
		int s,t;Weight w;
		cin>>s>>t>>w;
		G[s].emplace_back(t,w);
		G[t].emplace_back(s,w);
	}
	cout<<prim(G)<<endl;

	return 0;
}

