#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
const ull mod = 1e9 + 7;
#define REP(i,n) for(int i=0;i<(int)n;++i)

//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

template < typename T >
void vprint(T &v){
	REP(i, v.size()){
		cout << v[i] << " ";
	}
	cout << endl;
}

struct Edge{
    ll dst;
    ll weight;
    Edge(ll dst, ll weight): dst(dst), weight(weight) {}
};

typedef vector<Edge> Edges;
typedef vector<Edges> Graph;
const ll INFLL = LLONG_MAX/3;

pair<bool, vector<ll> > BellmanFord(Graph &G, ll r){
	bool negative_cycle = false;
	ll V = G.size();
	vector<ll> dist(V, INFLL);
	dist[r] = 0;
	for(int t=0;t<V;t++){
		for(int i=0;i<V;i++){
			if(dist[i]==INFLL) continue; 
			for(int j=0;j<G[i].size();j++){
				Edge e = G[i][j];
				if(dist[e.dst] > dist[i] + e.weight){
					dist[e.dst] = dist[i] + e.weight;
					if(t==V-1) negative_cycle = true;
				}
			}
		}
	}
	return {negative_cycle, dist};
}

int main(){
	ll V, E, r;
    cin >> V >> E >> r;
    Graph G(V);
    ll s, t, w;
    for(int i=0;i<E;i++){
        cin >> s >> t >> w;
        Edge e(t, w);
        G[s].push_back(e);
    }

    auto res = BellmanFord(G, r);
    bool negative_cycle = res.first;
    vector<ll> dist = res.second;
    if(negative_cycle){
    	cout << "NEGATIVE CYCLE" << endl;
    	return 0;
    }
    for (int i=0;i<V;i++){
        if(dist[i] == INFLL) cout << "INF" << endl;
        else cout << dist[i] << endl;
    }
    return 0;
}
