#include <iostream>
#include <vector>
#include <queue>

using namespace std;

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
};

struct Dikstra {
    int n;
    vector<Edge> edges;
    vector<vector<int>> g;
    vector<int> dists;
    
    Dikstra(int n):n(n) {
        g.assign(n + 1, vector<int>());
        dists.assign(n + 1, INF);
    }
    
    void addEdge(int from, int to, int w) {
        edges.push_back(Edge(from , to, w));
        g[from].push_back(edges.size() - 1);
    }
    
    void solve(int s) {
        priority_queue<Node> q;
        vector<bool> visited(n + 1, false);
        dists[s] = 0;
        q.push(Node(s, 0));
        
        while (!q.empty()) {
            Node u = q.top(); q.pop();
            if (visited[u.vertex]) {
                continue;
            }
            visited[u.vertex] = true;
            for (int edgeId : g[u.vertex]) {
                Edge edge = edges[edgeId];
                if (!visited[edge.to] && dists[u.vertex] + edge.weight < dists[edge.to]) {
                    dists[edge.to] = dists[u.vertex] + edge.weight;
                    q.push(Node(edge.to, dists[edge.to]));
                }
            }
        }   
    }
    
};

int main() {
    int v, e, s;
    cin >> v >> e >> s;
    Dikstra d(v);
    for (int i = 0; i < e; i++) {
        int from, to, w;
        cin >> from >> to >> w;
        d.addEdge(from, to, w);
    }
    d.solve(s);
    
    for (int i = 0; i < v; i++) {
        if (d.dists[i] == INF) {
            cout << "INF" << endl;
        }
        else {
            cout << d.dists[i] << endl;
        }
    }
    return 0;
}