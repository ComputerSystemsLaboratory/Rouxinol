#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <queue>

using namespace std;

const int WHITE = 0, GRAY = 1, BLACK = 2;

struct BFS {
    int n;
    vector<vector<int>> g;
    vector<int> depth;
    vector<int> state;
    int time = 0;

    BFS(int n) : n(n) {
        g.assign(n, vector<int>());
        depth.assign(n, -1);
        state.assign(n, WHITE);
    }

    void addEdge(int u, int v) {
        g[u].push_back(v);
    }

    void bfs(int s) {
        queue<int> q;
        state[s] = GRAY;
        depth[s] = 0;
        q.push(s);

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            if (state[u] == BLACK) {
                return;
            }
            for (int v : g[u]) {
                if (state[v] == WHITE) {
                    state[v] = GRAY;
                    depth[v] = depth[u] + 1;
                    q.push(v);
                }
            }
            state[u] = BLACK;
        }
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
    BFS dfs(n);
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

    dfs.bfs(0);

    for (int i = 0; i < n; i++) {
        cout << (i + 1) << " " << dfs.depth[i] << endl;
    }

    return 0;
}