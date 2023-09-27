#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct UnionFind{
    vector<int> par, siz;
    void init(int n){
        par.resize(n);
        siz.resize(n);
        for(int i = 0; i < n; i++){
            par[i] = i;
            siz[i] = 1;
        }
    }
    
    int root(int i){
        if(par[i] == i) return i;
        else return par[i] = root(par[i]);
    }

    bool same(int a, int b){
        return root(a) == root(b);
    }

    int size(int i){
        return siz[root(i)];
    }

    void unite(int a, int b){
        a = root(a);
        b = root(b);
        if(a == b) return;
        if(size(a) < size(b)) swap(a, b);
        siz[a] += siz[b];
        par[b] = a;
    }
};
struct edge{
    int from;
    int to;
    int cost;
};
bool comp(const edge &e1, const edge &e2){
    return e1.cost < e2.cost;
}
int main(){
    int V, E;
    cin >> V >> E;
    vector<int> used(V, 0);
    vector<edge> es(E);
    for(int i = 0; i < E; i++){
        int s, t, w;
        cin >> s >> t >> w;
        edge e = {s, t, w};
        es[i] = e;
    }
    sort(es.begin(), es.end(), comp);
    int ans = 0;
    UnionFind U;
    U.init(V);
    for(int i = 0; i < E; i++){
        edge e = es[i];
        if(!U.same(e.from, e.to)){
            U.unite(e.from, e.to);
            ans += es[i].cost;
        }
    }
    cout << ans << endl;
}
