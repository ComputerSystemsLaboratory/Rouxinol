#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using vc = vector<char>;
using vvc = vector<vc>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define debug(x) cerr << #x << ": " << x << endl;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}

int main() {
    ll V, E;
    cin >> V >> E;
    vvll dist(V, vll(V, INF));
    rep(i, E) {
        ll s, t, d;
        cin >> s >> t >> d;
        dist[s][t] = d;
    }
    rep(i, V) dist[i][i] = 0;

    rep(k, V) rep(i, V) rep(j, V) {
        if (dist[i][k] == INF || dist[k][j] == INF) continue;
        chmin(dist[i][j], dist[i][k] + dist[k][j]);
    }

    bool ng = false;
    rep(i, V) if(dist[i][i] < 0) ng = true;

    if(ng) cout << "NEGATIVE CYCLE" << endl;
    else {
        rep(i, V) {
            rep(j, V) {
                if(dist[i][j] == INF) cout << "INF";
                else cout << dist[i][j];
                if(j != V-1) cout << " ";
            }
            cout << endl;
        }
    }
}

