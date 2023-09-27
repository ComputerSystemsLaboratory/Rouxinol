#include <bits/stdc++.h>

#define rep(n) for(int i=0;i<n;i++)
#define repp(j, n) for(int j=0;j<n;j++)
#define reppp(i, m, n) for(int i=m;i<n;i++)
#define all(c) c.begin(), c.end()
#define rall(c) c.rbegin(), c.rend()
#define debug(x) cerr << #x << ": " << x << endl

using namespace std;

typedef long long ll;
typedef pair<ll, ll> Pll;
typedef pair<int, int> Pii;

class UnionFind {
    public:
    int n;
    vector<int> par, rank;

    UnionFind(int n) {
        rep(n) {
            par.push_back(i);
            rank.push_back(0);
        }
    }

    int find(int x) {
        return ((par[x] == x) ? x : par[x] = find(par[x]));
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);

        if(x == y) return;

        if(rank[x] < rank[y]){
            par[x] = y;
        }else{
            par[y] = x;
            if(rank[x] == rank[y]) rank[x]++;
        }
        return;
    }

    bool is_same(int x, int y) {
        return find(x) == find(y);
    }
};

struct Edge{
    int from, to; ll cost;
    Edge(int from, int to, ll cost){
        this->from = from;
        this->to = to;
        this->cost = cost;
    }
    bool operator<(const Edge &e) const{
        return cost < e.cost;
    }
};

struct Graph{
    int V,E;
    vector<Edge> edges;

    Graph(){
        cin >> V >> E;
        int s,t; ll w;
        rep(E){
            cin >> s >> t >> w;
            edges.emplace_back(Edge(s,t,w));
        }
    }

    ll kruskal(){
        ll ret = 0LL;
        UnionFind uf = UnionFind(V);
        sort(all(edges));
        for(Edge e: edges){
            if(!uf.is_same(e.from, e.to)){
                ret += e.cost;
                uf.unite(e.from, e.to);
            }
        }
        return ret;
    }
};

int main(){
    Graph g = Graph();
    cout << g.kruskal() << endl;
}
