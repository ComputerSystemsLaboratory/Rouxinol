#include <iostream>
#include <vector>

using namespace std;

const int MAX = 100000;

vector<int> G[MAX];
int C[MAX] = {0};

void dfs(int u, int c) {
    if (C[u] == 0) {
        C[u] = c;
        for (auto v : G[u]) {
            if (C[v] == 0) dfs(v, c);
        }
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int s, t;
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    int c = 1;
    for (int i = 0; i < n; i++) {
        if (C[i] == 0) dfs(i, c++);
    }

    //
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int s, t;
        cin >> s >> t;
        if (C[s] != 0 && C[s] == C[t]) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
