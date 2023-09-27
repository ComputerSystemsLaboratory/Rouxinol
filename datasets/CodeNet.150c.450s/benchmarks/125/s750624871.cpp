#include "bits/stdc++.h"

using namespace std;

void dfs(int curr, int& ts, const vector<set<int> >& graph
        , vector<int>& d, vector<int>& f) {

    ++ts;
    d[curr] = ts;
    const set<int>& nextNodes = graph[curr];
    for (int n : nextNodes) {
        if (d[n] > 0) {
            continue;
        }
        dfs(n, ts, graph, d, f);
    }
    ++ts;
    f[curr] = ts;
}

void Main() {
    int n;
    cin >> n;
    vector<set<int> > graph(n, set<int>());
    for (int i = 0; i < n; ++i) {
        int u, k;
        cin >> u >> k;
        --u;
        for (int j = 0; j < k; ++j) {
            int v;
            cin >> v;
            --v;
            graph[u].insert(v);
        }
    }

    vector<int> d(n, -1);
    vector<int> f(n, -1);
    int timestamp = 0;
    for (int i = 0; i < n; ++i) {
        if (d[i] < 0) {
            dfs(i, timestamp, graph, d, f);
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << (i + 1) << " " << d[i] << " " << f[i] << endl;
    }
}

int main() {
    std::cout << std::fixed << std::setprecision(15);
    Main();
    return 0;
}

