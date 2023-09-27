#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;

// graph //
int V,E,from,to,weight;

// uf //
vector<int> par;
vector<int> rnk;

struct Edge {
    int s,t,w;
    Edge(int s,int t,int w) : s(s), t(t), w(w) {}
    bool operator< (const Edge &e) const {
        return w < e.w;
    }
};

vector<Edge> edges;

int find(int x){
    if(par[x]==x) return x;
    return par[x] = find(par[x]);
}

bool same(int x,int y){
    return find(x) == find(y);
}

void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x==y) return;
    
    // unite //
    if(rnk[x] < rnk[y]) par[x] = y;
    else {
        par[y] = x;
        if(rnk[x]==rnk[y]) ++rnk[x];
    }
}

int kruskal(){
    sort(edges.begin(),edges.end());

    int cost = 0;
    for(auto itr = edges.begin(); itr!=edges.end(); ++itr){
        if(!same(itr->s,itr->t)){
            cost += itr->w;
            unite(itr->s,itr->t);
        }
    }
    return cost;
}

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);

    cin >> V >> E;
    par.resize(V,0);
    rnk.resize(V,0);
    for(int i = 0; i < V; ++i) par[i] = i;

    for(int i = 0; i < E; ++i){
        cin >> from >> to >> weight;
        edges.emplace_back(from,to,weight);
        edges.emplace_back(to,from,weight);
    }
    cout << kruskal() << '\n';
    return 0;
}
