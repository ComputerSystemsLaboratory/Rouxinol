#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <utility>
#include <string>
#include <queue>

#define rep(i, n) for(int i = 0; i < n; i++)
#define INF (1<<30)

typedef long long ll;

using namespace std;

struct UnionFind{
    vector<int> par;
    vector<int> sizes;

    UnionFind(int n) : par(n), sizes(n, 1){
        rep(i, n) par[i] = i;
    }

    int find(int x){
        if(x == par[x]) return x;
        return par[x] = find(par[x]);
    }

    void unite(int x, int y){
        x = find(x);
        y = find(y);
        if(x == y) return;
        if(sizes[x] < sizes[y]) swap(x, y);
        par[y] = x;
        sizes[x] += sizes[y];
    }

    bool same(int x, int y){
        return find(x) == find(y);
    }

    int size(int x){
        return sizes[find(x)];
    }
};

struct Edge{
    int a, b, cost;
    bool operator<(const Edge& o) const{
        return cost < o.cost;
    }
};

struct Graph{
    int n;  //頂点数
    vector<Edge> es;

    int kruskal(){
        sort(es.begin(), es.end());
        UnionFind uf(n);
        int min_cost = 0;

        rep(i, es.size()){
            Edge& e = es[i];
            if(!uf.same(e.a, e.b)){
                min_cost += e.cost;
                uf.unite(e.a, e.b);
            }
        }
        return min_cost;
    }
};

Graph input_graph(){
    Graph g;
    int m;
    cin >> g.n >> m;
    rep(i, m){
        Edge e;
        cin >> e.a >> e.b >> e.cost;
        g.es.push_back(e);
    }
    return g;
}

void solve(){
    Graph g = input_graph();
    cout << g.kruskal() << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}
