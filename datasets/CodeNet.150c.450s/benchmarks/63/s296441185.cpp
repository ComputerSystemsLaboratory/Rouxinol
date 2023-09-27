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
typedef pair<int,int> P;
typedef pair<int,P> PP;

//-----------------------------------------------------------------------------

int V,E,R;
#define INIT INF
typedef int Weight;
typedef pair<Weight,int> P;

struct Edge {
	int to;
	Weight cost;
	Edge(int to,Weight cost):to(to),cost(cost) {}
};

typedef vector< vector<Edge> > Graph;

bool operator<(const Edge &e,const Edge &f) {
	return e.cost!=f.cost?e.cost>f.cost:e.to<f.to;
}

void dijkstra(const Graph &G,int s,vector<Weight> &dist) {
	int n=(int)G.size();
	dist.assign(n,INIT);
	dist[s]=0;
	priority_queue< P,vector<P>,greater<P> > Q;
	Q.push(P(0,s));
	while(!Q.empty()) {
		P p=Q.top();Q.pop();
		int v=p.second;
		if(dist[v]<p.first) continue;
		REP(i,(int)G[v].size()) {
			Edge e=G[v][i];
			if(dist[e.to]<=dist[v]+e.cost) continue;
			dist[e.to]=dist[v]+e.cost;
			Q.push(P(dist[e.to],e.to));
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	cin>>V>>E>>R;
	Graph G(V);
	vector<Weight> dist(V,INIT);
	REP(i,E) {
		int u,v;Weight c;
		cin>>u>>v>>c;
		G[u].push_back(Edge(v,c));
	}
	dijkstra(G,R,dist);
	REP(i,V) {
		if(dist[i]==INIT) cout<<"INF"<<endl;
		else cout<<dist[i]<<endl;
	}

	return 0;
}

