#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define REP(i, n) for(int i=0; i < (n); ++i)
#define mp make_pair
#define fi first
#define se second
#define pb push_back

const int MAX_V = 1e4;
const int MAX_E = 1e4;
ll INF = 1e16;

struct Edge {
    int from, to, w;
};

vector<Edge> w(MAX_E);
ll d[MAX_V];
int V, E;

bool bellman_ford(int s) {
    REP(i, V) d[i] = INF;
    d[s] = 0;

    REP(i, V) {
        REP(j, E) {
            Edge e = w[j];
            if (d[e.from] != INF && d[e.to] > d[e.from] + e.w) {
                d[e.to] = d[e.from] + e.w;

                if (i == V - 1) {
                    return true; // detect negative loop.
                }
            }
        }
    }

    return false; // no negative loops.
}

int main() {
    int r;
    cin >> V >> E >> r;

    REP(i, E) {
        int a, b, c;
        cin >> a >> b >> c;
        w[i] = {a, b, c};
    }


    if (bellman_ford(r)) {
        cout << "NEGATIVE CYCLE" << endl;
    } else {
        REP(i, V) {
            if (d[i] == INF) cout << "INF" << endl;
            else cout << d[i] << endl;
        }
    }
}
