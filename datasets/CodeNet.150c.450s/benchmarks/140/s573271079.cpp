#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef long long ll;

const int INF = 1e9;

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
};

struct Prim {
    int n;
    vector<Edge> edges;
    vector<vector<int>> g;
    vector<int> dists;
    
    Prim(int n):n(n) {
        g.assign(n + 1, vector<int>());
        dists.assign(n + 1, INF);
    }
    
    void addEdge(int from, int to, int w) {
        edges.push_back(Edge(from , to, w));
        g[from].push_back(edges.size() - 1);
        g[to].push_back(edges.size() - 1);
    }
    
    int solve(int s) {
        priority_queue<Node> q;
        vector<bool> visited(n + 1, false);
        dists[s] = 0;
        q.push(Node(s, 0));
        ll total = 0;
        while (!q.empty()) {
            Node u = q.top(); q.pop();
            if (visited[u.vertex]) {
                continue;
            }
            visited[u.vertex] = true;
            
            total += u.dist;
            
            for (int edgeId : g[u.vertex]) {
                Edge edge = edges[edgeId];
                int v = edge.other(u.vertex);
                if (!visited[v] && edge.weight < dists[v]) {
                    dists[v] = edge.weight;
                    q.push(Node(v, dists[v]));
                }
            }
        } 
        return total;
    }
    
};

int main() {
    int v, e;
    cin >> v >> e;
    Prim d(v);
    for (int i = 0; i < e; i++) {
        int from, to, w;
        cin >> from >> to >> w;
        d.addEdge(from, to, w);
    }
    int ans = d.solve(0);
    cout << ans << endl;
    
    return 0;
}