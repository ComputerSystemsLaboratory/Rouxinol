#include <bits/stdc++.h>
using namespace std;

struct UnionFind{
    vector<int> par;
    UnionFind(int N) : par(N){
        for(int i = 0; i < N; i++){
            par[i] = -1;
        }
    }
    int root(int x){
        if(par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    void unite(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return;
        else{
            if(par[rx] > par[ry]) swap(rx, ry);
            par[rx] += par[ry];
            par[ry] = rx;
       }
    }
    bool same(int x, int y){
        return root(x) == root(y);
    }
    void check(){
        for(auto x : par){
            cout << x << " ";
        }
        cout << endl;
    }
};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    
    UnionFind uf(n);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        uf.unite(a, b);
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int s, t;
        cin >> s >> t;
        if(uf.same(s, t)){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }

    return 0;
}
