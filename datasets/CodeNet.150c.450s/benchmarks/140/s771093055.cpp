#include<bits/stdc++.h>
using namespace std;

struct UnionFind
{
    vector<int> par;

    UnionFind(int n) : par(n, -1){ }

    int root(int x){
        if(par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }

    bool issame(int x, int y){
        return root(x) == root(y);
    }

    bool merge(int x, int y){
        x = root(x); y = root(y);
        if(x == y) return false;
        if(par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }

    int size(int x){
        return -par[root(x)];
    }
};

struct Edge
{
    int a, b, cost;

    bool operator<(const Edge& o) const{
        return cost < o.cost;
    }
};

struct Graph
{
    int n;
    vector<Edge> es;

    int kruskal(){
        sort(es.begin(), es.end());

        UnionFind uf(n);
        int min_cost = 0;

        for (int ei = 0; ei < es.size(); ei++)
        {
            Edge& e = es[ei];
            if(!uf.issame(e.a, e.b)){
                min_cost += e.cost;
                uf.merge(e.a, e.b);
            }
        }
        return min_cost;
    }
};

Graph input_graph(){
    Graph g;
    int m;
    cin >> g.n >> m;
    for (int i = 0; i < m; i++)
    {
        Edge e;
        cin >> e.a >> e.b >> e.cost;
        g.es.push_back(e);
    }
    return g;
}

int main() {
    Graph g = input_graph();
    cout << g.kruskal() << endl;
}
