#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> G[110], d(110);

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int u, k; cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v; cin >> v;
            G[u-1].push_back(v-1);
        }
    }

    for (int i = 0; i < n; i++) d[i] = -1;

    queue<int> que;
    que.push(0);
    d[0] = 0;
    while (!que.empty()) {
        int u = que.front(); que.pop();
        for (int v: G[u]) {
            if (d[v] == -1) {
                que.push(v);
                d[v] = d[u] + 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i+1 << " " << d[i] << endl;
    }
}
