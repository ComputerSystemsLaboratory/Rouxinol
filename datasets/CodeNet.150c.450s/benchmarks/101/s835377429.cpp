#include <bits/stdc++.h>
using namespace std;

int n, m, q, x, y;
int connect[100001];
vector<int> g[100001];

void dfs(int v, int c) {
    connect[v] = c;
    
    int size_ = g[v].size();
    for (int i = 0; i < size_; ++i) {
        if (connect[g[v][i]] == 0) {
            dfs(g[v][i], c);
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int c = 1;
    for (int i = 0; i < n; ++i) {
        if (connect[i] == 0) {
            dfs(i, c);
            c++;
        }
    }

    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> x >> y;
        if (connect[x] == connect[y]) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}