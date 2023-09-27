#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<climits>
#include<cstring>
#include<queue>
#include<map>
#include<functional>
using namespace std;

const int dev = 1e9+7;
typedef long long ll;

const int MAX_N = 1e5;


struct Edge{
    int s, t, w;
    bool operator<( const Edge& right ) const {
        return w < right.w;
    }
};

struct UnionFind{
    int N;
    int par[MAX_N];

    UnionFind(int N): N(N){
        for (int i=0;i<N;i++){
            par[i] = i;
        }
    }

    int root(int x){
        if(par[x] == x) return x;
        int rx = root(par[x]);
        par[x] = rx;
        return rx;
    }

    void unite(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if(rx==ry) return;
        par[rx] = ry;
    }

    bool find(int x, int y){
        return root(x) == root(y);
    }
};

int main(){
    int V, E, s, t, w;
    cin >> V >> E;
    vector<Edge> edges;
    for (int i=0;i<E;i++){
        Edge e;
        cin >> e.s >> e.t >> e.w;
        edges.push_back(e);
    }
    sort(edges.begin(), edges.end());

    UnionFind uf(V);
    int res = 0;
    for (int i=0;i<E;i++){
        Edge e = edges[i];
        if (!uf.find(e.s, e.t)){
            res += e.w;
            uf.unite(e.s, e.t);
        }
    }
    cout << res << endl;
    return 0;
}