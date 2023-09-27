#include<stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>
#include<iterator>
#include<queue>

using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0;i<(int)(n);i++)

class Graph{
    public:
    typedef struct Edge{
        ll from, to, cost;
        Edge(ll f, ll t, ll c): from(f),to(t),cost(c){}
    } Edge;

    bool isDirected;
    ll INF = 1 << 30;
    ll v; // 頂点数
    std::vector<Edge> edges;  // 辺のリスト
    std::vector<std::vector<std::pair<ll,ll>>> list;  // 隣接リスト
    //std::vector<std::vector<ll>> matrix; // 隣接行列

    Graph(ll n, bool isDirected=false) : isDirected(isDirected) { init(n); }
    void init(ll n){
        v=n;
        edges.clear();
        list.assign(n, std::vector<std::pair<ll,ll>>());
        //matrix.assign(n, std::vector<ll>(n, INF));
    }
    void connect(ll from, ll to){
        con(from, to, 1);
        if(!isDirected) con(to, from, 1);
    }
    void connect(ll from, ll to, ll cost){
        con(from, to, cost);
        if(!isDirected) con(to, from, cost);
    }
    void con(ll from, ll to, ll cost){
        edges.push_back(Edge(from,to,cost));
        list[from].push_back(std::make_pair(to, cost));
        //matrix[from][to] = cost;
    }
};

std::vector<ll> BellmanFord(Graph G, ll start, ll inf){ // 点startから各点への最短経路長
    std::vector<ll> dist(G.v, inf);
    std::vector<bool> negative(G.v, 0);
    dist[start] = 0;

    REP(i, G.v){
        for(auto edge : G.edges){
            if(dist[edge.from]==inf)continue;
            if(dist[edge.to]>dist[edge.from]+edge.cost){
                dist[edge.to] = dist[edge.from] + edge.cost;
            }
        }
    }
    REP(i,G.v){
        for(auto edge : G.edges){
            if(dist[edge.from]==inf)continue;
            if(dist[edge.to] > dist[edge.from]+edge.cost) negative[edge.to]=true;
            if(negative[edge.from]==true)negative[edge.to]=true;
        }
    }
    std::vector<ll> ans = dist;
    REP(i,G.v)if(negative[i]==true) ans[i]=-inf;
    return ans;
}

int main(){
    int v,e,r, s,t,d;
    cin >> v >> e >> r;
    Graph gr(v, true);
    REP(i,e){
        cin >> s >> t >> d;
        gr.connect(s,t,d);
    }
    ll inf = 1<<30;
    std::vector<ll> ans = BellmanFord(gr, r, inf);
    bool negative = false;
    for(auto i : ans) if(i==-inf)negative=true;
    if(negative){cout<< "NEGATIVE CYCLE"<<endl; return 0;}
    for(auto i : ans){
        if(i==inf) cout << "INF" << endl;
        else cout << i << endl;
    }
}
