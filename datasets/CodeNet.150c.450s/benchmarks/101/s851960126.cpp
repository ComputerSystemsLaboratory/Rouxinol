#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

const int WHITE = 0, GREY = 1, BLACK = 2;

struct CC {
    int n;
    vector<vector<int>> g;
    vector<int> color;
    vector<int> component;
    int cId = 0; //component id
    
    CC (int n) : n(n) {
        g.assign(n, vector<int>(0));
        color.assign(n, WHITE);
        component.assign(n, -1);
    }
    
    void addEdge (int u, int v) {
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    void solve () {
        for (int i = 0; i < n; i++) {
            if (color[i] == WHITE) {
                cId++;
                bfs(i);
            }
        }
    }
    
    void bfs (int s) {
        queue<int> q;
        q.push(s);
        color[s] = GREY;
        component[s] = cId;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (int v : g[u]) {
                if (color[v] == WHITE) {
                    q.push(v);
                    color[v] = GREY;
                    component[v] = cId;
                }
            }
        }
    }
};

int main() {
    
    int n, m;
    cin >> n >> m;
    CC cc(n);
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        cc.addEdge(u, v);
    }
    
    cc.solve();
    
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int u, v;
        cin >> u >> v;
        if (cc.component[u] == cc.component[v]) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    
    return 0;
}
