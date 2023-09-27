#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> g(n);
    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }


    vector<int> cost(n, -1);
    cost[0] = 0;
    queue<int> que;
    que.push(0);

    while (!que.empty()) {
        int cur = que.front(); que.pop();
        for (auto v : g[cur]) {
            if (cost[v] != -1) continue;
            cost[v] = cost[cur] + 1;
            que.push(v);
        }
    }

    cout << "Yes" << endl;
    for (int i = 1; i < n; ++i) {
        for (auto v : g[i]) {
            if (cost[v] < cost[i]) {
                cout << v + 1 << endl;
                break;
            }
        }
    }
}

