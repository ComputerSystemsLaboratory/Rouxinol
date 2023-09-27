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
#define debug(x) cerr << #x << ": " << x << endl
#define debug_vec(v) cerr << #v << ":"; rep(i, v.size()) cerr << " " << v[i]; cerr << endl
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF = (1<<30) - 1;
const ll LINF = (1LL<<60) - 1;

vector<int> G[101010];

int main(){
    int n, m;
    cin >> n >> m;
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        G[a].pb(b);
        G[b].pb(a);
    }
    vector<int> ans(n + 1, -1);
    ans[1] = 0;
    queue<int> que;
    que.push(1);
    while(que.size()) {
        int v = que.front();
        que.pop();
        for(auto u : G[v]) {
            if (ans[u] == -1) {
                ans[u] = v;
                que.push(u);
            }
        }
    }
    cout << "Yes" << endl;
    for(int i = 2; i <= n; i++) {
        cout << ans[i] << endl;
    }
}
