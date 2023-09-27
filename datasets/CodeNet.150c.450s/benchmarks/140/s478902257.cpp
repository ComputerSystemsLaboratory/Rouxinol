#include <bits/stdc++.h>
using namespace std;


template<typename T>
struct Kruskal {
    struct Edge {
        int from, to;
        T cost;
        Edge(int from, int to, T cost) : from(from), to(to), cost(cost){}
        bool operator<(const Edge& e) const {
            return cost < e.cost;
        }
    };
    struct UF {
    vector<int> r, p;
        UF() = default;
        UF(int sz) : r(sz, 1), p(sz){ iota(begin(p), end(p), 0LL); }
        int find(int x){
            return (x == p[x] ? x : p[x] = find(p[x]));
        }
        bool same(int x, int y){
            return find(x) == find(y);
        }
        void unite(int x, int y){
            x = find(x), y = find(y);
            if(x == y) return;
            if(r[x] < r[y]) swap(x, y);
            r[x] += r[y];
            p[y] = x;
        }
    };
    vector<Edge> es;
    UF uf;
    Kruskal() = default;
    Kruskal(int n) : uf(n){}
    void addEdge(int u, int v, T c){
        es.emplace_back(u, v, c);
    }
    T build(){
        sort(begin(es), end(es));
        T res = 0;
        for(auto& e : es){
            if(!uf.same(e.from, e.to)){
                res += e.cost;
                uf.unite(e.from, e.to);
            }
        }
        return res;
    }
};


int V, E;
Kruskal<int> G;


int main(){
    cin >> V >> E;
    G = Kruskal<int>(V);
    for(int i = 0;i < E;++i){
        int s, t, w;
        cin >> s >> t >> w;
        G.addEdge(s, t, w);
    }

    int ans = G.build();

    cout << ans << endl;

    return 0;
}
