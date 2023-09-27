#include <bits/stdc++.h>
using namespace std;
using edge = tuple<int, int, int>;


struct UnionFind{
    vector<int> data;
    UnionFind(int size) : data(size, -1){}
    void unite(int x, int y){
        x = root(x);
        y = root(y);
        if (x != y){
            if (data[y] < data[x]) swap(x, y);
            data[x] += data[y];
            data[y] = x;
        }
    }
    int root(int x) {return data[x] < 0 ? x : data[x] = root(data[x]);}
    int size(int x) {return -data[root(x)];}
};


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int V, E;
    cin >> V >> E;
    if (V == 1){
        cout << 0 << endl;
        return 0;
    }
    UnionFind uf(V);
    vector<edge> edges;
    while (E--){
        int s, t, w;
        cin >> s >> t >> w;
        edges.emplace_back(w, s, t);
    }
    sort(begin(edges), end(edges));
    int total_weight = 0;
    int pos = 0;
    int u, v, w;
    tie(w, u, v) = edges[pos];
    for (int i = 1; i < V; ++i){
        while (uf.root(u) == uf.root(v)){
            ++pos;
            w = get<0>(edges[pos]);
            u = get<1>(edges[pos]);
            v = get<2>(edges[pos]);
        }
        uf.unite(u, v);
        total_weight += w;
    }
    cout << total_weight << endl;
    return 0;
}