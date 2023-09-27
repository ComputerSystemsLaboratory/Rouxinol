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
using Dist=vector<T>;

template< typename T >
vector<T> dijkstra(WeightedGraph<T> &G,int s) {
	const auto INIT=numeric_limits<T>::max();
	vector<T> dist(G.size(),INIT);
	dist[s]=0;

	using P=pair<T,int>;
	priority_queue< P,vector<P>,greater<P> > Q;
	Q.push(P(0,s));
	while(!Q.empty()) {
		P p=Q.top();Q.pop();
		int v=p.second;
		if(dist[v]<p.first) continue;
		for(auto &e:G[v]) {
			if(dist[e.to]<=dist[v]+e.cost) continue;
			dist[e.to]=dist[v]+e.cost;
			Q.push(P(dist[e.to],e.to));
		}
	}
	return dist;
}

using Weight=long long;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n,m,s;
	cin>>n>>m>>s;
	WeightedGraph<Weight> G(n);
	Dist<Weight> dist(n);
	const auto INIT=numeric_limits<Weight>::max();
	for(int i=0;i<m;i++) {
		int a,b;Weight c;
		cin>>a>>b>>c;
		G[a].emplace_back(b,c);
	}
	dist=dijkstra(G,s);
	REP(i,n) {
		if(dist[i]==INIT) cout<<"INF"<<endl;
		else cout<<dist[i]<<endl;
	}

	return 0;
}

