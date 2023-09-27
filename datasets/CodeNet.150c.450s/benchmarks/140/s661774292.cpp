#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <set>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,j) FOR(i,0,j)
#define mp std::make_pair

const int INF = 1 << 24;
const int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1}, dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

typedef unsigned long long ull;
typedef std::pair<int,int> P;

const int MAX_V = 10000;

class UnionFind{
public:
    UnionFind(){}
    UnionFind(int n){init(n);}
    void init(int n){
        REP(i, n){
            parent[i] = i;
            rank[i] = 0;
        }
    }
    int find(int v){
        if(parent[v] == v){return v;}
        return parent[v] = find(parent[v]);
    }
    void unite(int x, int y){
        x = find(x);
        y = find(y);
        if(x == y){return;}
        if(rank[x] > rank[y]){
            parent[y] = x;
        }else{
            parent[x] = y;
            if(rank[x] == rank[y]){rank[y]++;}
        }
    }
    bool same(int x, int y){
        return find(x) == find(y);
    }
private:
    int parent[MAX_V], rank[MAX_V];
};

struct Edge{
    int from, to, cost;
};

bool compareEdge(const Edge &le, const Edge &re){
    return le.cost < re.cost;
}

UnionFind uf;
int main(){
    int V, E;
    std::cin >> V >> E;

    std::vector<Edge> G;
    REP(i, E){
        int from, to, cost;
        std::cin >> from >> to >> cost;
        G.push_back({from, to, cost});
    }

    std::sort(G.begin(), G.end(), compareEdge);

    uf.init(V);
    ull sum = 0;
    REP(i, E){
        Edge &e = G[i];
        if(!uf.same(e.from, e.to)){
            sum += e.cost;
            uf.unite(e.from, e.to);
        }
    }

    std::cout << sum << std::endl;
}