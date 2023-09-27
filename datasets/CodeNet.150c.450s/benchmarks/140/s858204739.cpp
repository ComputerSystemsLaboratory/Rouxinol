#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define REPR(i, n) for(int i = n; i >= 0; i--)
#define FOR(i, m, n) for(int i = m; i < n; i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define INF 1e9
typedef long long ll;

struct UnionFind{
    vector<int> data;
    //data[i] = -x ... iが根であり、サイズがx
    //data[i] = x ... iの親がx

    //最初は全員根
    UnionFind(int size): data(size,-1){}

    bool union_set(int x, int y){//サイズがx>yになるようにしてから、xにyをつなげる
        x=root(x);
        y=root(y);
        if(x != y){
            if(data[y] < data[x]) swap(x,y);
            data[x] += data[y];
            data[y] = x;
        }
        return x != y;
    }
    bool find_set(int x, int y){//ルートが一致するかどうかを返す
        return root(x) == root(y);
    }
    int root(int x){//根を見つける。ついでに深さ2にしちゃう
        return data[x]<0 ? x : data[x]=root(data[x]);
    }
    int size(int x){
        return -data[root(x)];
    }
};

struct Edge{
    int s,t,cost;
    bool operator<(const Edge &o) const{
        return cost < o.cost;
    }
};

struct Graph{
    int n;
    vector<Edge> es;

    int kruskal(){
        sort(ALL(es));

        UnionFind uf(n);
        int min_cost = 0;
        REP(i,es.size()){
            Edge e = es[i];
            if(!uf.find_set(e.s, e.t)){//辺を追加しても閉路ができなければ採用
                min_cost += e.cost;
                uf.union_set(e.s, e.t);
            }
        }

        return min_cost;
    }
};


int main() {
    int V,E;
    cin >> V >> E;
    Graph g;
    g.n = V;

    REP(i,E){
        Edge e;
        cin >> e.s >> e.t >> e.cost;
        g.es.push_back(e);
    }

    cout << g.kruskal() << endl;
    return 0;
}
