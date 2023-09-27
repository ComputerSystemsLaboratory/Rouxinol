#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> A[n+1];
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        A[a].push_back(b);
        A[b].push_back(a);
    }
    queue<int> nodes;
    vector<bool> visited(n+1,false);
    vector<int> sign(n+1,0);
    nodes.push(1);
    visited[1] = true;
    while (!nodes.empty()) {
        int node = nodes.front();
        nodes.pop();
        for (auto u : A[node]) {
            if (visited[u]) continue;
            visited[u] = true;
            sign[u] = node;
            nodes.push(u);
        }
    }
    cout << "Yes\n";
    for (int i = 2; i < n+1; i++) {
        cout << sign[i] << "\n";
    }
}
