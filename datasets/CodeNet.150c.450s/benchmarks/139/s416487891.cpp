#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i<(n); i++)
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
using ll = long long;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> path(N);
    rep(i, M) {
        int A, B;
        cin >> A >> B;
        A--, B--;
        path[A].push_back(B);
        path[B].push_back(A);
    }

    vector<bool> visited(N, false);
    vector<int> ans(N, -1);
    queue<int> q;
    q.push(0);
    visited[0] = true;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (auto nv: path[v]) {
            if (visited[nv]) continue;
            visited[nv] = true;
            ans[nv] = v;
            q.push(nv);
        }
    }

    cout << "Yes" << endl;
    for (int i = 1; i < ans.size(); i++) cout << ans[i] + 1 << endl;
}
