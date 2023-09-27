#include <iostream>
#include <vector>
const int MAX_N = 100000;
const int NIL = -1;
using namespace std;

int n;
vector<int> G[MAX_N];
int color[MAX_N];

void dfs(int u, int col) {
    color[u] = col;
    for (auto i = 0; i < G[u].size(); i++) {
        int v = G[u][i];
        if (color[v] == NIL) {
            color[v] = col;
            dfs(v, col);
        }
    }
}

void dfs_init(void) {
    int id = 1;
    for (int i = 0; i < n; i++) color[i] = NIL;
    for (int i = 0; i < n; i++) {
        if (color[i] == NIL) {
            dfs(i, id);
            id++;
        }
    }
}

int main(void) {
    int m, s, t;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    dfs_init();

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> s >> t;
        if (color[s] == color[t]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}