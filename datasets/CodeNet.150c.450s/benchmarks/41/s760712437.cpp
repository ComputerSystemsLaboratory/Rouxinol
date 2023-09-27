#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i < (int)(n); i++)
using ull = unsigned long long;
using ll = long long;

ll dist[110][110];
ll INF = 5E+7 * 100;


int main() {
    int V, E;
    cin >> V >> E;

    rep(i, V) rep(j, V) {
        if (i==j) dist[i][j] = 0;
        else dist[i][j] = INF;
    }

    int si, ti, di;
    rep(i, E) {
        cin >> si >> ti >> di;
        dist[si][ti] = di;
    }

    ll min_dist = INF;
    bool neg_cycle = false;

    rep(i, V) rep(j, V) rep(k, V) {
        if ((dist[i][k] != INF) && (dist[k][j] != INF)) {
            dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
        }
        min_dist = min(min_dist, dist[i][j]);
    }
    rep(i, V) rep(j, V) rep(k, V) {
        if ((dist[i][k] != INF) && (dist[k][j] != INF)) {
            dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
        }
        min_dist = min(min_dist, dist[i][j]);
    }


    rep(i, V) rep(j, V) rep(k, V) {
        if ((dist[i][k] != INF) && (dist[k][j] != INF)) {
            dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
        }
        if (min_dist > dist[i][j]) {
            neg_cycle = true;
            break;
        }
    }

    if (neg_cycle) cout << "NEGATIVE CYCLE" << endl;
    else {
        rep(i, V) {
            rep(j, V) {
                if (dist[i][j] >= INF) cout << "INF";
                else cout << dist[i][j];
                if (j<V-1) cout << " ";
            }
            cout << endl;
        } 
    }

    return 0;
}


