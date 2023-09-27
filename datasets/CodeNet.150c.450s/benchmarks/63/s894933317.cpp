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

struct TmpDist{
    ll vertex;
    ll dist;
    TmpDist(ll vertex, ll dist): vertex(vertex), dist(dist) {}
    bool operator< (const TmpDist& right)const{
        return dist > right.dist;
    }
};

typedef vector<Edge> Edges;
typedef vector<Edges> Graph;
const ll INFLL = LLONG_MAX/3;

vector<ll> dijkstra(Graph &G, ll r){
    ll V = G.size();
    vector<ll> dist(V, INFLL);
    priority_queue<TmpDist> pq;
    vector<bool> check(V, false);
    TmpDist init(r, 0);
    pq.push(init);
    while(!pq.empty()){
        TmpDist td = pq.top();pq.pop();
        ll now = td.vertex;
        if(!check[now]){
            check[now] = true;
            dist[now] = td.dist;
            for (int i=0;i<G[now].size();i++){
                if(dist[G[now][i].dst] > td.dist + G[now][i].weight){
                    TmpDist tdCandidate(G[now][i].dst, td.dist + G[now][i].weight);
                    pq.push(tdCandidate);
                }
            }
        }
    }
    return dist;
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

    vector<ll> dist = dijkstra(G, r);
    for (int i=0;i<V;i++){
        if(dist[i] == INFLL) cout << "INF" << endl;
        else cout << dist[i] << endl;
    }
    return 0;
}
