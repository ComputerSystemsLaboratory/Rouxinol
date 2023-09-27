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
bool bellman_ford(Edges<T> &edges,int s,vector<T> &dist) {
	const auto INIT=numeric_limits<T>::max();
	int n=(int)dist.size();
	dist.assign(n,INIT);
	dist[s]=0;
	bool negative_cycle=false;
	for(int i=0;i<n;i++) {
		for(auto e:edges) {
			if(dist[e.from]==INIT) continue;
			if(dist[e.to]<=dist[e.from]+e.cost) continue;
			dist[e.to]=dist[e.from]+e.cost;
			if(i==n-1) {
				dist[e.to]=-INIT;
				negative_cycle=true;
			}
		}
	}
	return !negative_cycle;
}

using Weight=int;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n,m,s;
	cin>>n>>m>>s;
	Edges<Weight> edges;
	vector<Weight> dist(n);
	const auto INIT=numeric_limits<Weight>::max();
	for(int i=0;i<m;i++) {
		int a,b;Weight c;
		cin>>a>>b>>c;
		edges.emplace_back(a,b,c);
	}
	if(bellman_ford(edges,s,dist)) {
		REP(i,n) {
			if(dist[i]==INIT) cout<<"INF"<<endl;
			else cout<<dist[i]<<endl;
		}
	}
	else cout<<"NEGATIVE CYCLE"<<endl;

	return 0;
}

