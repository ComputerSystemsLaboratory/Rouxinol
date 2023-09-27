#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int main() {
    int32_t n;
    cin >> n;

    vector<vector<pair<int32_t, int32_t>>> A(n);

    for (int32_t i = 0; i < n; i++) {
        int32_t u, k;
        cin >> u >> k;

        for (int32_t j = 0; j < k; j++) {
            int32_t v, c;
            cin >> v >> c;
            A[u].push_back(make_pair(c, v));
        }
    }

    vector<int32_t> d(n, INT32_MAX);
    vector<bool> visited(n, false);
    priority_queue<pair<int32_t, int32_t>, vector<pair<int32_t, int32_t>>, greater<pair<int32_t, int32_t>>> q;
    q.push(make_pair(0, 0));

    while (!q.empty()) {
        int32_t u, d_u;
        tie(d_u, u) = q.top();
        q.pop();

        if (visited[u]) continue;
        visited[u] = true;

        d[u] = d_u;

        for (auto e : A[u]) {
            int32_t v, d_uv;
            tie(d_uv, v) = e;

            if (d[v] > d_u + d_uv) {
                q.push(make_pair(d_u + d_uv, v));
            }
        }
    }

    for (int32_t i = 0; i < n; i++) {
        cout << i << " " << d[i] << endl;
    }

    return 0;
}