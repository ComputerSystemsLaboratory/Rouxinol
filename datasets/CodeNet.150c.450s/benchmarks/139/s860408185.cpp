#include <bits/stdc++.h>
const int INF = 1e9;
const int MOD = 1e9+7;
const long long LINF = 1e18;
#define dump(x)  cout << 'x' << ' = ' << (x) << ` `;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) for(int i=0;i<(n);++i)
#define REPR(i,n) for(int i=n;i>=0;i--)
#define FOREACH(x,a) for(auto& (x) : (a) )
typedef long long ll;
using namespace std;
typedef pair<ll, ll> P;

template<typename T>
void print(const vector<T> &x) {
    int n = x.size();
    rep(i,n) {
        cout << x[i];
        if (i!=n-1) cout<<" ";
        else cout << endl;
    }
}

template<typename T>
void print(const vector<vector<T>> &x) {
    int n = x.size();
    rep(i,n) {
        rep(j,x[i].size()) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}

template<typename T>
void print(const vector<T> &x, int n) {
    rep(i,n) {
        cout << x[i];
        if (i!=n-1) cout<<" ";
        else cout << endl;
    }
}

template<typename T>
void print(const vector<vector<T>> &x, int n, int m) {
    rep(i,n) {
        rep(j,m) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

void input_init() {
    cin.tie(0); ios::sync_with_stdio(false);
}

int main(int argc, char const *argv[]) {
    int n,m; cin>>n>>m;
    vector<vector<int>> g(n);
    rep(i,m) {
        int a,b; cin>>a>>b; --a, --b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    vector<int> dp(n,INF),prev(n,INF);
    queue<int> q;
    q.push(0);
    dp[0] = 0;
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (auto &&e: g[cur]) {
            if (chmin(dp[e], dp[cur]+1)) {
                q.push(e);
                prev[e] = cur;
            }
        }
    }

    cout << "Yes" << '\n';
    for (int i = 1; i < n; ++i) {
        cout << prev[i]+1 << '\n';
    }
    return 0;
}