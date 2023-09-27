#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
const int M = 1000000007;

int prim_cost(vector<vector<P>> edge) {
    int n = edge.size();
    vector<int> vis(n, 0);
    int c = 0;
    priority_queue<P, vector<P>, greater<P>> q;
    q.push(P(0, 0));
    while (!q.empty()) {
        P p = q.top();
        q.pop();
        if (vis[p.second]) continue;
        vis[p.second] = 1;
        c += p.first;
        for (auto& e : edge[p.second]) {
            if (!vis[e.second]) {
                q.push(P(e.first, e.second));
            }
        }
    }
    return c;
}


int main() {
    int n;
    cin >> n;
    vector<vector<P>> edge(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int a;
            cin >> a;
            if (a != -1)
                edge[i].push_back(P(a, j));
        }
    }
    cout << prim_cost(edge) << "\n";
    return 0;
}