#include <bits/stdc++.h>
using namespace std;
#define rep(i,n)for(int i=0;i<(n);i++)
using ll = long long;
using P = pair<int, int>;

struct UnionFind {
    vector<int> size, parents;
    UnionFind(int n){
        size.resize(n,0);
        parents.resize(n,0);
        for(int i = 0; i < n; i++){
            makeTree(i);
        }
    }
    void makeTree(int x){
        parents[x] = x;
        size[x] = 1;
    }
    bool isSame(int x, int y){return findRoot(x) == findRoot(y);}
    void unite(int x, int y){
        x = findRoot(x);
        y = findRoot(y);
        if(size[x] > size[y]){
            parents[y] = x;
            size[x] += size[y];
        }else{
            parents[x] = y;
            size[y] += size[x];
        }
    }
    int findRoot(int x){
        if(x != parents[x]){
            parents[x] = findRoot(parents[x]);
        }
        return parents[x];
    }
    int treeSize(int x){return size[findRoot(x)];}
};

struct Edge{int u, v, cost;};

bool comp(const Edge &e1, const Edge &e2){return e1.cost < e2.cost;}

vector<Edge> edges;
int V, E;

int kruskal(){
    sort(edges.begin(), edges.end(), comp);
    UnionFind uf = UnionFind(V);
    int res = 0;
    for(int i = 0; i < E; i++){
        Edge e = edges[i];
        if(!uf.isSame(e.u, e.v)){
            uf.unite(e.u, e.v);
            res += e.cost;
        }
    }
    return res;
}

int main(){
    cin >> V >> E;
    rep(i,E){
        int s, t, w;
        cin >> s >> t >> w;
        Edge e = {s, t, w};
        edges.push_back(e);
    }
    int ans = 0;
    ans = kruskal();
    cout << ans << endl;
}
