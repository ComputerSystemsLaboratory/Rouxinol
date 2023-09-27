#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int WHITE = 0, GREY = 1, BLACK = 2;

struct DFS {
    int n;
    vector<vector<int>> g;
    vector<int> color;
    vector<int> dt;
    vector<int> ft;
    int ct = 1;
 
    DFS(int n) : n(n) {
        g.assign(n, vector<int>());
        color.assign(n, WHITE);
        dt.assign(n, -1);
        ft.assign(n, -1);
    }
    
    void solve() {
        for (int i = 0; i < n; i++) {
            if (color[i] == WHITE) {
                dfs(i);
            }
        }
    }
    
    void dfs(int u) {
        //cout << "visit " << u << endl;
        color[u] = GREY;
        dt[u] = ct++; 
        for (int v : g[u]) {
            if (color[v] == WHITE) {
                dfs(v);
            }
        }
        ft[u] = ct++;
        color[u] = BLACK;
    }
    
    void addEdge(int u, int v) {
        g[u].push_back(v);
    }
    
    void printGraph() {
        for (int i = 0; i < n; i++) {
            cout << i << ": ";
            for (int v : g[i]) {
                cout << v << " ";
            }
            cout << endl;
        }
    }
        
};


int main() {   
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
    
    //dfs.printGraph();
    
    dfs.solve();
    
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << " " << dfs.dt[i] << " " << dfs.ft[i] << endl;
    }
    
    return 0;
}