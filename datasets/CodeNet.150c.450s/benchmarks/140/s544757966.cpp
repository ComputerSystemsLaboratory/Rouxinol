#include <bits/stdc++.h>
using namespace std;
#define int long long

struct UnionFind{
    vector<int> par;

    UnionFind(int n): par(n){
        for(int i=0; i<n; i++){
            par[i] = i;
        }
    }

    int root(int i){
        if(par[i] == i) return i;
        else return par[i] = root(par[i]);
    }

    void unite(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if(rx != ry){
            par[rx] = ry;
        }
    }

    bool same(int x, int y){
        return root(x) == root(y);
    }
};


signed main(){
    // cout << fixed << setprecision(10) << flush;

    int V, E;
    cin >> V >> E;
    vector<tuple<int, int, int>> wt;
    for(int i=0; i<E; i++){
        int s, t, w;
        cin >> s >> t >> w;
        wt.push_back(make_tuple(w, s, t));
    }
    sort(wt.begin(), wt.end());
    
    int sum_span = 0;
    UnionFind uf(V);
    for(int i=0; i<E; i++){
        int w = get<0>(wt[i]);
        int s = get<1>(wt[i]);
        int t = get<2>(wt[i]);
        if(uf.root(s) != uf.root(t)){
            sum_span += w;
            uf.unite(s, t);
        }
    }

    cout << sum_span << endl;
    return 0;
}
