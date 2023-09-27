#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

const int WHITE=0, GRAY=1, BLACK=2;

struct DFS {
    int n;
    vector<vector<int>> g;
    vector<int> group;
    vector<int> state;
    int groupId = 0;
    
    DFS(int n):n(n) {
        g.assign(n, vector<int>());
        group.assign(n, -1);
        state.assign(n, WHITE);
    }
    
    void addEdge(int u, int v) {
        g[u].push_back(v);
    }
    
    void solve() {
        for (int i = 0; i < n; i++) {
            if (state[i] == WHITE) {
                groupId++;
                dfs(i);
            }
        }
    }
    
    void dfs(int u) {
        state[u] = GRAY;
        group[u] = groupId;
        for (int v : g[u]) {
            if (state[v] == WHITE) {
                dfs(v);
            } 
        }
        state[u] = BLACK;
    }
    
    void print() {
        for (int i = 0; i < n; i++) {
            cout << i << ":";
            for (int v : g[i]) {
                cout << v << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    int n, e;
    cin >> n >> e;
    
    DFS dfs(n);
    
    for (int i = 0; i < e; i++) {
       int u, v;
       cin >> u >> v;
       dfs.addEdge(u, v);
       dfs.addEdge(v, u);
    }
   
    dfs.solve();
    
    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        int u, v;
        cin >> u >> v;
        if (dfs.group[u] == dfs.group[v]) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    
    return 0;
}