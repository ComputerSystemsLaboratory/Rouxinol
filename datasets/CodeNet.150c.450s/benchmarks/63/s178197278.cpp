#include <bits/stdc++.h>
#include <sys/time.h>
using namespace std;

#define rep(i,n) for(long long i = 0; i < (long long)(n); i++)
#define pb push_back
#define fi first
#define se second
template<class T1, class T2> bool chmin(T1 &a, T2 b) { return b < a && (a = b, true); }
template<class T1, class T2> bool chmax(T1 &a, T2 b) { return a < b && (a = b, true); }
#define INF (ll)1e18
#define ll long long
#define P pair<ll, ll>
#define vll vector<ll>
#define vvll vector<vll>

ll n, m, st;
vector<vector<P> > g;
void solve1(void) {
    vll dist(n, INF);
    priority_queue<P, vector<P>, greater<P> > q;
    q.push(P(0, st)); dist[st] = 0;
    while (q.size()) { 
        // q = {(d, v)} : 未確定な頂点vに距離dで到達可能である（dは最適とは限らない）
        // dist[v] : 頂点vに到達可能な距離のうち、今までの最小値
        //
        // vの初出がここに来た時点で、dist[v]が最適であることは保証されている！
        P st = q.top(); q.pop();
        ll d = st.fi, v = st.se;
        if (d > dist[v]) continue; // 同じvに異なる距離dで到達可能だが、最適なものだけを見ればよい
        rep(i, g[v].size()) {
            P edge = g[v][i];
            ll u = edge.fi, cost = edge.se;
            if (dist[v] + cost >= dist[u]) continue;
            dist[u] = dist[v] + cost;
            q.push(P(dist[v] + cost, u));
        }
    }
    rep(i, n) {
        if (dist[i] == INF) 
            cout << "INF" << endl;
        else
            cout << dist[i] << endl;
    }
}

int main(void) {
    cin >> n >> m >> st;
    g.resize(n);
    rep(i, m) {
        ll u, v, d; cin >> u >> v >> d;
        g[u].pb(P(v, d));
    }
    solve1();

    return 0;
}

