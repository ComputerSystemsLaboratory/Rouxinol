#include <bits/stdc++.h>

using namespace std;
using LL = long long;
using P = pair<int, int>;
using Tapris = tuple<int, int, int>;

#define REP(i, n) for(LL i = 0; i < n; ++i)
#define FOR(i, a, n) for(LL i = a; i < n; ++i)
#define pb(a) push_back(a)
#define all(x) (x).begin(),(x).end()

const int INF = (int)1e9;
const LL INFL = (LL)1e15;
const int MOD = 1e9 + 7;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

//#define int long long

class UnionFind {
    private:
        vector<int> parent;  // 親
        vector<int> rank;    // 木の深さ
    public:
        UnionFind(int n);          // n要素で初期化
        int Find(int x);           // 木の根を返す
        void Unite(int x, int y);  // xとyの属する集合を併合
        bool Same(int x, int y);   // xとyが同じ集合に属するか否か
};

UnionFind::UnionFind(int n) : parent(vector<int>(n)), rank(vector<int>(n)) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
}

int UnionFind::Find(int x) {
    if (parent[x] == x) {
        return x;
    } else {
        return parent[x] = Find(parent[x]);
    }
}

void UnionFind::Unite(int x, int y) {
    x = Find(x);
    y = Find(y);
    if (x == y) return;

    if (rank[x] < rank[y]) {
        parent[x] = y;
    } else {
        parent[y] = x;
        if (rank[x] == rank[y]) rank[x]++;
    }
}

bool UnionFind::Same(int x, int y) { return Find(x) == Find(y); }

template <typename T>
struct Edge {
    int src, to;
    T cost;
    Edge(int to, T cost) : src(-1), to(to), cost(cost) {}
    Edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}
};

template <typename T>
class Kruskal {
    private:
        int V; // 頂点数
        vector<Edge<T>> edges;
        vector<vector<Edge<T>>> minimumSpanningTree;
    public:
        Kruskal(int n);
        void AddEdge(int from, int to, T cost);
        T Run();
        vector<vector<Edge<T>>> GetMinimumSpanningTree();
};

template <typename T>
Kruskal<T>::Kruskal(int n) : V(n), minimumSpanningTree(n) {}

template <typename T>
void Kruskal<T>::AddEdge(int from, int to, T cost) {
    edges.push_back(Edge<T>(from, to, cost));
}

template <typename T>
T Kruskal<T>::Run() {
    sort(edges.begin(), edges.end(), [](const Edge<T> &a, const Edge<T> &b){
        return a.cost < b.cost;
    });
    UnionFind tree(V);
    T total = 0;
    
    for(auto &e : edges){
        if(!tree.Same(e.src, e.to)){
            tree.Unite(e.src, e.to);
            total += e.cost;
            minimumSpanningTree[e.src].push_back(Edge<T>(e.to, e.cost));
            minimumSpanningTree[e.to].push_back(Edge<T>(e.src, e.cost));
        }
    }

    return total;
}

template <typename T>
vector<vector<Edge<T>>> Kruskal<T>::GetMinimumSpanningTree(){
    return minimumSpanningTree;
}

/*************** using variables ***************/

/**********************************************/

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    Kruskal<int> kruskal(n);
    REP(i, n){
        REP(j, n){
            int x;
            cin >> x;
            if(x != -1) kruskal.AddEdge(i, j, x);
        }
    }

    cout << kruskal.Run() << endl;
}

