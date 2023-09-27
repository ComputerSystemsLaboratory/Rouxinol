#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define all(v) v.begin(), v.end()
#define fi first
#define se second
using namespace std;
using ll = long long;
using P = pair<int ,int>;
const int INF = 1e9*2+1;
const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int v, e; cin >> v >> e;
    vector<vector<ll>> G(v, vector<ll>(v, INF));
    rep(i, e) {
        int s, t, d; cin >> s >> t >> d;
        G[s][t] = d;
    }
    rep(i, v) rep(j, v) if(i==j) G[i][j] = 0;

    rep(i, v) rep(j, v) rep(k, v) {
        if(G[j][i]!=INF&&G[i][k]!=INF) G[j][k] = min(G[j][k], G[j][i]+G[i][k]);
    }
    
    bool negativeCycle = false;
    rep(i, v) rep(j, v) {
        if (i==j && G[i][j]!=0) negativeCycle = true;
    }

    if (negativeCycle) {
        puts("NEGATIVE CYCLE");
    } else {
        rep(i, v) rep(j, v) {
            if (G[i][j]!=INF) cout << G[i][j];
            else cout << "INF";
            if (j<v-1) cout << " ";
            else cout << endl;
        }
    }
}
