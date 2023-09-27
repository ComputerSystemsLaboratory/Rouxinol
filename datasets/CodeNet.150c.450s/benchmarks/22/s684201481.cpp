#include <bits/stdc++.h>
using namespace std;

#define REP(i,init, n) for(lli i=init;i<n;i++)
#define REPE(i,init, n) for(lli i=init;i<=n;i++)
#define REPIT(it,container) for(auto it = container.begin(); it != container.end(); it++)
#define REPIT_R(it,container) for(auto it = container.rbegin(); it != container.rend(); it++)

#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

typedef long long int lli;
typedef pair<lli, lli> P;

struct edge {
    lli from;
    lli to;
    lli cost;
};
vector<edge> edges;


lli d[2001]; // 各頂点の始点からの距離
lli V;       // 頂点の数
lli E;       // 辺の数
lli r;       // 始点の番号

bool calc_shortest_path(lli start) {
    REP(i, 0, V) {
        d[i] = LLONG_MAX;
    }
    d[start] = 0;

    lli loop_count = 0;
    bool updated;
    while (true) {
        if (loop_count == V)
            return false;

        updated = false;
        REP(i, 0, (lli)edges.size()) {
            edge e = edges[i];
            if (d[e.from] == LLONG_MAX)
                continue;
            if (d[e.from] + e.cost < d[e.to]) {
                d[e.to] = d[e.from] + e.cost;
                updated = true;
            }
        }

        loop_count++;
        if (!updated)
            break;
    }
    return true;
}

int main() {
    cin >> V >> E >> r;
    REP(i, 0, E) {
        lli s; // 始点
        lli t; // 終点
        lli d; // 重み
        cin >> s >> t >> d;
        edge e = {s, t, d};
        edges.push_back(e);
    }

    if (calc_shortest_path(r)) {
        REP(i, 0, V) {
            if (d[i] == LLONG_MAX)
                cout << "INF" << endl;
            else
                cout << d[i] << endl;
        }
    }
    else {
        cout << "NEGATIVE CYCLE" << endl;
    }



    //REP(i, 0, edges.size()) {
    //    cout << "from:   " << edges[i].from;
    //    cout << ", to:   " << edges[i].to;
    //    cout << ", cost: " << edges[i].cost << endl;
    //}
}


// 入力例
// 4 5 0
// 0 1 2
// 0 2 3
// 1 2 -5
// 1 3 1
// 2 3 2
//
// コピー用
// 4 5 0 0 1 2 0 2 3 1 2 -5 1 3 1 2 3 2


