#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define INF (INT_MAX / 2)
#define INFL (INT64_MAX /2)
typedef pair<int, int> P;

























int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(m+1),b(m+1);
    rep(i,m) {
        cin >> a[i] >> b[i];
    }
    vector<vector<int>> possible(n+1);
    rep(i,m) {
        possible[a[i]].push_back(b[i]);
        possible[b[i]].push_back(a[i]);
    }

    vector<int> d(n+1,INF), ans(n+1);
    d[1] = 0;
    queue<int> que;
    que.push(1);

    while (!que.empty()) {
        int a = que.front(); que.pop();
        rep(i, possible[a].size()) {
            if (d[possible[a][i]] > d[a] + 1) {
                d[possible[a][i]] = d[a] + 1;
                ans[possible[a][i]] = a;
                que.push(possible[a][i]);
            }
        }
    }
    bool bo = false;
    rep(i,n) {
        if (d[i+1] == INF) {
            cout << "No" << endl;
            break;
        }
        bo = true;
    }
    if (bo) {
        cout << "Yes" << endl;
        rep (i,n-1) {
            cout << ans[i+2] << endl;
        }
    }
}