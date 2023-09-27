#include "bits/stdc++.h"
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

using ll = long long;

int main() {
    int V, E, s, t, d;
    cin >> V >> E;
    vector<vector<ll>> dist(V, vector<ll>(V, 1e18));
    rep(i, V) dist[i][i] = 0;
    rep(i, E) {
        cin >> s >> t >> d;
        dist[s][t] = d;
    }
    rep(k, V) {
        rep(i, V) {
            rep(j, V) {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    rep(i, V) {
        if (dist[i][i] < 0) {
            cout << "NEGATIVE CYCLE\n";
            return 0;
        }
    }
    rep(i, V) {
        rep(j, V) {
            if (dist[i][j] > 1e17) cout << "INF";
            else cout << dist[i][j];
            if (j == V - 1) cout << "\n";
            else cout << " ";
        }
    }
}
