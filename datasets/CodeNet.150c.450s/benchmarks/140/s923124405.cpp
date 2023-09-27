#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

typedef long long ll;

const int INF = 1e9;

struct UF {
    int n;
    vector<int> parent;
    vector<int> size;
    
    UF(int n): n(n) {
        size.assign(n + 1, 1);
        parent.assign(n + 1, 0);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }
    
    void unite(int u, int v) {
        int i = findRoot(u);
        int j = findRoot(v);
        if (size[i] < size[j]) {
            parent[i] = j;
            size[j] += size[i];
        }
        else {
            parent[j] = i;
            size[i] += size[j];
        }
    }
    
    bool find(int u, int v) {
        return findRoot(u) == findRoot(v);
    }
    
    int findRoot(int u) {
        //Can add path compression here
        while (u != parent[u]) {
            u = parent[u];
        }
        return u;
    }
    
};


struct Node {
    int vertex;
    int dist;
    
    Node(int vertex, int dist):vertex(vertex), dist(dist){}
    
    bool operator<(const Node& other) const {
        return dist > other.dist;
    }
};

struct Edge {
    int from, to;
    int weight;
    Edge(int from, int to, int weight):from(from), to(to), weight(weight){}
    
    int other(int u) {
        return from == u? to: from;
    }
    
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};



struct Kruskal {
    int n;
    vector<Edge> edges;
    vector<vector<int>> g;
    
    Kruskal(int n):n(n) {
        g.assign(n + 1, vector<int>());
    }
    
    void addEdge(int from, int to, int w) {
        edges.push_back(Edge(from , to, w));
        g[from].push_back(edges.size() - 1);
        g[to].push_back(edges.size() - 1);
    }
    
    int solve(int s) {
        UF uf(n + 1);
        
        int total = 0;
        
        sort(edges.begin(), edges.end());
        
        for (Edge edge : edges) {
            if (!uf.find(edge.from, edge.to)) {
                total += edge.weight;
                uf.unite(edge.from, edge.to);
            }
        }
        
        return total;
    }
    
};

int main() {
    int v, e;
    cin >> v >> e;
    Kruskal d(v);
    for (int i = 0; i < e; i++) {
        int from, to, w;
        cin >> from >> to >> w;
        d.addEdge(from, to, w);
    }
    int ans = d.solve(0);
    cout << ans << endl;
    
    return 0;
}