#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class UnionFind
{
public:
    UnionFind(int n) : parent(n), rank(n){
        for(int i = 0; i < n; ++i){
            parent[i] = i;
            rank[i] = 0;
        }
    }
    
    int find(int i){
        if(parent[i] == i){
            return i;
        } else {
            return parent[i] = find(parent[i]);
        }
    }
    
    bool same(int i, int j){
        return find(i) == find(j);
    }
    
    void unite(int i, int j){
        i = find(i);
        j = find(j);
        if(i == j) return;
        else if(rank[i] < rank[j]){
            parent[i] = j;
        } else {
            parent[j] = i;
            if(rank[i] == rank[j]) ++rank[i];
        }
    }
    
private:
    vector<int> parent;
    vector<int> rank;
};

struct Edge{
    int u,v,cost;
};

vector<Edge> E;

int main()
{
    int n,cost,ans = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> cost;
            if(cost != -1){
                Edge e;
                e.u = i; e.v = j; e.cost = cost;
                E.push_back(e);
            }
        }
    }
    
    sort(E.begin(), E.end(), [](const Edge& x, const Edge& y){return x.cost < y.cost;});
    
    UnionFind U(n);
    
    for(int i = 0; i < E.size(); ++i){
        if(!U.same(E[i].u, E[i].v)){
            U.unite(E[i].u, E[i].v);
            ans += E[i].cost;
        }
    }
    
    cout << ans << endl;
}