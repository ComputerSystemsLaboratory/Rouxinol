#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fi first
#define se second
#define pb push_back
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF = (1<<30) - 1;
const ll LINF = (1LL<<60) - 1;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> G[n];
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].pb(b);
        G[b].pb(a);
    }
    cout << "Yes\n";
    vector<int> ans(n, 0);
    ans[0] = 1;

    queue<int> que;
    que.push(0);

    while(que.size()) {
        int p = que.front();
        que.pop();
        for (auto &v : G[p]) {
            if (ans[v]) continue;
            que.push(v);
            ans[v] = p + 1;
        }
    }

    for(int i = 1; i < n; i++) {
        cout << ans[i] << endl;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    solve();
    return 0;
}