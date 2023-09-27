#include <bits/stdc++.h>
using namespace::std;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

typedef long long ll;
typedef array<int, 3> tri;
typedef long double ld;

template <class T> istream& operator>>(istream& I, vector<T>& v) {for (T &e: v) I >> e; return I;}
template <class T> ostream& operator<<(ostream &O, const vector<T>& v) {for (const T &e: v) O << e << ' '; return O;}




void _main() {
        int n, m; cin >> n >> m;
        vector<vector<int>> adj(n+1);
        while (m--) {
                int a, b; cin >> a >> b;
                adj[a].emplace_back(b);
                adj[b].emplace_back(a);
        }

        queue<int> q;
        q.emplace(1);
        vector<bool> vis(n+1);
        vector<int> ans(n+1);
        vis[1] = 1;
        while (!q.empty()) {
                int a = q.front(); q.pop();
                for (const auto b: adj[a]) {
                        if (vis[b]) continue;
                        q.emplace(b);
                        ans[b] = a;
                        vis[b] = 1;
                }
        }

        cout << "Yes\n";
        for (int i = 2; i <= n; i++) cout << ans[i] << '\n';
}



signed main() {
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//        freopen("input.txt", "r", stdin);
        int _t = 1;
//        cin >> _t;
        while (_t--) _main();
        return 0;
}
