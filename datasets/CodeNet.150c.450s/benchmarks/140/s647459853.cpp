#include <bits/stdc++.h>
using namespace std;

struct UF{
   vector<int> par;
   vector<int> sz;
   UF(){}
   UF(int n){
       par.resize(n);
       sz.resize(n, 1);
       for(int i = 0; i < n; i++) par[i] = i;
   }
   int find(int x){
       if(x == par[x]) return x;
       return par[x] = find(par[x]);
   }
   void unite(int x, int y){
       x = find(x); y = find(y);
       if(x == y) return;
       if(sz[x] < sz[y]) swap(x, y);
       sz[x] += sz[y];
       par[y] = x;
   }
   bool same(int x, int y){
       return find(x) == find(y);
   }
};

struct edge{
    int u, v, cost;
    bool operator<(const edge &e) const{
        return cost < e.cost;
    }
};

int n, m;
vector<edge> es; 

int kruskal(){
    int res = 0;    
    UF uf(n);
    sort(es.begin(), es.end());
    for(int i = 0; i < m; i++){
        edge e = es[i];
        if(!uf.same(e.u, e.v)){
            uf.unite(e.u, e.v);
            res += e.cost;
        }
    }
    return res;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        //u--; v--;
        es.push_back({u, v, w});
    }
    cout << kruskal() << endl;
}

/* verified
https://onlinejudge.u-aizu.ac.jp/#/courses/library/5/GRL/2/GRL_2_A

*/
