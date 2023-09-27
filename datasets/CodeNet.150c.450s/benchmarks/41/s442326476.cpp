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
const ll MAX_V = 500;

ll dist[MAX_V][MAX_V];

void WarhshallFloyd(Graph &G){
	ll V = G.size();
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(i==j) dist[i][j] = 0;
			if(i!=j) dist[i][j] = INFLL;
		}
	}
	for(int i=0;i<V;i++){
		for(int j=0;j<G[i].size();j++){
			Edge e = G[i][j];
			dist[i][e.dst] = e.weight;
		}
	}

	for(int k=0;k<V;k++){
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++){
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
	return;
}

int main(){
	ll V, E;
    cin >> V >> E;
    Graph G(V);
    ll s, t, w;
    for(int i=0;i<E;i++){
        cin >> s >> t >> w;
        Edge e(t, w);
        G[s].push_back(e);
    }

    for(int i=0;i<V;i++){
		for(int j=0;j<G[i].size();j++){
			Edge e = G[i][j];
		}
	}
    WarhshallFloyd(G);

    // detect negative cycle
    // there is a negative cycle iff for some i dist[i][i]<0
    bool negative_cycle = false;
    for(int i=0;i<V;i++){
    	if (dist[i][i]<0){
    		cout << "NEGATIVE CYCLE" << endl;
    		return 0;
    	}
    }
    for(int i=0;i<V;i++){
    	for(int j=0;j<V;j++){
    		if (dist[i][j]>INFLL/2) cout << "INF";
    		else cout << dist[i][j]; 
    		if(j<V-1) cout << " ";
    	}
    	cout << endl;
    }
    return 0;
}
