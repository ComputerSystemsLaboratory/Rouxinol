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

struct BellmanFord {
    int n;
    vector<Edge> edges;
    vector<vector<int>> g;
    vector<int> dists;
    
    BellmanFord(int n):n(n) {
        g.assign(n + 1, vector<int>());
        dists.assign(n + 1, INF);
    }
    
    void addEdge(int from, int to, int w) {
        edges.push_back(Edge(from , to, w));
        g[from].push_back(edges.size() - 1);
    }
    
    bool solve(int s) {
        dists.assign(n + 1, INF);
        dists[s] = 0;
        for (int i = 0; i <= n; i++) {
            for (Edge edge: edges) {
                if (dists[edge.from] < INF && dists[edge.from] + edge.weight < dists[edge.to]) {
                    dists[edge.to] = dists[edge.from] + edge.weight;
                    if (i == n) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
    
    bool solve1(int s) {
        dists.assign(n + 1, INF); //distance from s
        vector<bool> inq(n + 1, false);
        vector<int> cnt(n + 1, 0);
           
        queue<int> q;
        dists[s] = 0;
        inq[s] = true;
        q.push(s);
        
        while (!q.empty()) {
            int u = q.front(); q.pop();
            inq[u] = false;
            for (int eid: g[u]) {
                Edge e = edges[eid];
                if (dists[u] < INF && dists[e.to] > dists[u] + e.weight) {
                    dists[e.to] = dists[u] + e.weight;
                    if (!inq[e.to]) { 
                        q.push(e.to);
                        inq[e.to] = true;
                        if (++cnt[e.to] > n) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    } 
    
   
    bool hasNegativeCycle() {
        dists.assign(n + 1, 0);
        for (int i = 0; i <= n; i++) {
          
            for (Edge edge: edges) {
                if (dists[edge.from] < INF && dists[edge.from] + edge.weight < dists[edge.to]) {
                    dists[edge.to] = dists[edge.from] + edge.weight;
                    if (i == n) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    
};

int main() {
    int v, e, s;
    cin >> v >> e >> s;
    BellmanFord d(v);
    for (int i = 0; i < e; i++) {
        int from, to, w;
        cin >> from >> to >> w;
        d.addEdge(from, to, w);
    }
    if (!d.solve1(s)) {
        cout << "NEGATIVE CYCLE" << endl;
    }
    
    else {
        for (int i = 0; i < v; i++) {
            if (d.dists[i] == INF) {
                cout << "INF" << endl;
            }
            else {
                cout << d.dists[i] << endl;
            }
        }
    }
    return 0;
}