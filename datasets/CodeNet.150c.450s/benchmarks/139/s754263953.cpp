#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MM = 1000000000;
const int MOD = MM + 7;
const int MAX = 510000;
#define rep(i, n) for(ll i=0; i<n; i++)
#define Rep(i, j, n) for(ll i=j; i<n; i++)
#define all(vec) vec.begin(), vec.end()
template<class T> inline bool chmin(T& a, T b) {if(a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if(a < b) {a = b; return true;} return false;}
const ll INF = 1LL << 60;


int main() {
    ll n, m; cin >> n >> m;
    vector<vector<ll>> g(n);
    vector<ll> dist(n);
    vector<ll> num(n);
    queue<ll> q;
    rep(i, m) {
        ll a, b; cin >> a >> b; a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    q.push(0);
    while(!q.empty()) {
        ll now = q.front();
        q.pop();
        for(ll x : g[now]) {
            if(dist[x] != 0) continue;
            dist[x] = dist[now] + 1;
            num[x] = now;
            q.push(x);
        }
    }
    bool fl = 0;
    Rep(i, 1, n) if(dist[i] == 0) fl = 1;
    if(fl) {cout << "No" << endl; return 0;}
    cout << "Yes" << endl;
    Rep(i, 1, n) cout << num[i] + 1<< endl;
}
