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
    vector<int> discover;
    vector<int> finish;
    vector<int> state;
    int time = 1;
    
    DFS(int n):n(n) {
        g.assign(n, vector<int>());
        discover.assign(n, -1);
        finish.assign(n, -1);
        state.assign(n, WHITE);
    }
    
    void addEdge(int u, int v) {
        g[u].push_back(v);
    }
    
    void solve() {
        for (int i = 0; i < n; i++) {
            if (state[i] == WHITE) {
                dfs(i);
            }
        }
    }
    
    void dfs(int u) {
        state[u] = GRAY;
        discover[u] = time++;
        for (int v : g[u]) {
            if (state[v] == WHITE) {
                dfs(v);
            } 
        }
        finish[u] = time++;
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
    int n;
    cin >> n;
    DFS dfs(n);
    for (int i = 0; i < n; i++) {
       int u, k;
       cin >> u >> k;
       u--;
       for (int j = 0; j < k; j++) {
           int v;
           cin >> v;
           v--;
           dfs.addEdge(u, v);
       }
    }
    
    //dfs.print();
    
    dfs.solve();
    
    for (int i = 0; i < n; i++) {
        cout << (i + 1) <<  " " << dfs.discover[i] << " " << dfs.finish[i] << endl; 
    }
    
    return 0;
}