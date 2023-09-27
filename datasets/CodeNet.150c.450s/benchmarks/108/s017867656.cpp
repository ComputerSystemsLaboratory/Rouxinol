#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

const int WHITE = 0, GREY = 1, BLACK = 2;
const int INF = 1000000;

struct BFS {
    int n;
    vector<vector<int>> g;
    vector<int> parent;
    vector<int> distance;
    vector<int> color;
    
    BFS (int n) : n(n) {
        g.assign(n, vector<int>(0));
        parent.assign(n, -2);
        distance.assign(n, INF);
        color.assign(n, WHITE);
    }
    
    void addEdge (int u, int v) {
        g[u].push_back(v);
    }
    
    void bfs (int s) {
        queue<int> q;
        q.push(s);
        parent[s] = -1;
        distance[s] = 0;
        color[s] = GREY;
        while (!q.empty()) { //u = current, v = neighbors
            int u = q.front();
            q.pop();
            for (int v : g[u]) {
                if (color[v] == WHITE) {
                    q.push(v);
                    parent[v] = u;
                    distance[v] = distance[u] + 1;
                    color[v] = GREY;
                }
            }
            color[u] = BLACK;
        }
    }
    
    void printResults () {
        for (int i = 0; i < n; i++) {
            int dist = distance[i];
            if (dist == INF) {
                dist = -1;
            }
            cout << i + 1 << " " << dist << endl;
        }
    }
};

int main() {
    
    int n;
    cin >> n;
    BFS bfs(n);
    
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            bfs.addEdge(u - 1, v - 1);
        }
    }
    
    bfs.bfs(0);
    bfs.printResults();
    
    return 0;
}
