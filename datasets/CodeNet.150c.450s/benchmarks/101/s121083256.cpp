#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int kSize = 100001;

vector<int> adj[kSize];
bool isMarked[kSize];
int d[kSize];
int cc = 0;

void dfs(int v) {
    isMarked[v] = true;
    d[v] = cc;

    for (int i = 0; i < adj[v].size(); ++i) {
        int u = adj[v][i];
        if (!isMarked[u]) {
            dfs(u);
        }
    }
}

int main() {
    int n, m;
    fill(isMarked, isMarked + kSize, false);
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int from, to;
        cin >> from >> to;
        adj[from].push_back(to);
        adj[to].push_back(from);
    }

    for (int i = 0; i < n; ++i) {
        if (!isMarked[i]) {
            dfs(i);
            cc++;
        }
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int from, to;
        cin >> from >> to;
        if (d[from] == d[to]) {
            cout << "yes";
        } else {
            cout << "no";
        }
        cout << endl;
    }
    return 0;
}
