#include <bits/stdc++.h>
using namespace std;

long long MAX_E = 2005;
long long MAX_V = 1005;
long long INF = 1e10;

struct edge {long long from, to, cost; };

vector<edge> es(MAX_E);
vector<long long> d(MAX_V);
long long v, e;

// s 番目の頂点から各頂点への最短距離を求める
// true なら s からたどり着ける負の閉路が存在する
bool bellman_ford(long long s) {
    for (long long i = 0; i < v; i++) d[i] = INF;
    d[s] = 0;
    for (long long i = 0; i < v; i++) {
        bool update = false;
        for (long long j = 0; j < e; j++) {
            edge ed = es[j];
            if (d[ed.from] != INF && d[ed.to] > d[ed.from] + ed.cost) {
                d[ed.to] = d[ed.from] + ed.cost;
                update = true;

                if (i == v - 1) return true;
            }
        }
        if (!update) break;
    }
    return false;
}


int main() {
    long long r;
    cin >> v >> e >> r;

    for (long long i = 0; i < e; i++) {
        cin >> es[i].from >> es[i].to >> es[i].cost;
    }

    bool is_negative = bellman_ford(r);

    if (is_negative) cout << "NEGATIVE CYCLE" << endl;
    else {
        for (long long i = 0; i < v; i++) {
            if (d[i] == INF) cout << "INF" << endl;
            else cout << d[i] << endl;
        }
    }
}


