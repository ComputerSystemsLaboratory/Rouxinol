#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(long long i=0; i<(n); i++)
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

long long MAX_E = 500005;
long long MAX_V = 100005;
long long INF = 1e10;

struct edge {long long to, cost; };
typedef pair<long long, long long> P;

vector<vector<edge>> G(MAX_V);
vector<long long> d(MAX_V);
long long V;

// s 番目の頂点から各頂点への最短距離を求める
void dijkstra(long long s) {
    priority_queue<P, vector<P>, greater<P>> que;
    fill(d.begin(), d.end(), INF);
    d[s] = 0;
    que.push(P(0, s));

    while (!que.empty()) {
        P p = que.top();
        que.pop();

        long long v = p.second;
        if (d[v] < p.first) continue;

        for (long long i = 0; i < G[v].size(); i++) {
            edge e = G[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

int main(){
    ll v, e, r; cin >> v >> e >> r;
    vector<ll> s(e), t(e), dis(e);
    rep(i, e) cin >> s[i] >> t[i] >> dis[i];
    rep(i, e) G[s[i]].push_back({t[i], dis[i]});
    dijkstra(r);
    rep(i, v){
        if(d[i] == INF) cout << "INF" << endl;
        else cout << d[i] << endl;
    }
}
