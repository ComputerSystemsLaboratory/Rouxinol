#include <bits/stdc++.h>

#define _overload(_1,_2,_3,name,...) name
#define _rep(i,n) _range(i,0,n)
#define _range(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload(__VA_ARGS__,_range,_rep,)(__VA_ARGS__)

#define _rrep(i,n) _rrange(i,n,0)
#define _rrange(i,a,b) for(int i=int(a)-1;i>=int(b);--i)
#define rrep(...) _overload(__VA_ARGS__,_rrange,_rrep,)(__VA_ARGS__)

#define _all(arg) begin(arg),end(arg)
#define uniq(arg) sort(_all(arg)),(arg).erase(unique(_all(arg)),end(arg))
#define getidx(ary,key) lower_bound(_all(ary),key)-begin(ary)
#define clr(a,b) memset((a),(b),sizeof(a))
#define bit(n) (1LL<<(n))
#define popcount(n) (__builtin_popcountll(n))

template<class T>bool chmax(T &a, const T &b) { return (a<b)?(a=b,1):0;}
template<class T>bool chmin(T &a, const T &b) { return (b<a)?(a=b,1):0;}

using namespace std;


using Weight=long long;
using Edge=struct{int to;Weight cost;};
using Graph=vector<vector<Edge>>;
const Weight inf=1LL<<60;

vector<Weight> dijkstra(const Graph &g,int s){
	int n=g.size();
	using state=tuple<Weight,int>;
	vector<Weight> dist(n,inf);
	priority_queue<state,vector<state>,greater<state>> q;
	dist[s]=0,q.push(state(0,s));
	while(!q.empty()){
		Weight c; int v;
		tie(c,v)=q.top();q.pop();
		for(auto &e:g[v]){
			Weight nc=c+e.cost; int nv=e.to;
			if(chmin(dist[nv],nc)) q.push(state(nc,nv));
		}
	}
	return dist;
}

int main(void){
	int v,e,s;
	cin >> v >> e >> s;
	Graph graph(v);
	rep(loop,e){
		int a,b,c;
		cin >> a >> b >> c;
		graph[a].push_back({b,c});
	}

	auto dist=dijkstra(graph,s);
	rep(i,v){
		if(dist[i]==inf)
			puts("INF");
		else
			cout << dist[i] << endl;
	}
	return 0;
}