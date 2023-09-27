#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

#define FOR(i, n, m) for(ll (i)=(m);(i)<(n);++(i))
#define REP(i, n) FOR(i,n,0)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll) 1e15;

struct Edge {
    ll from;
    ll to;
    ll cost;
};

Edge E[2005];
ll C[1005];

int main() {
    ll N, M, R;
    cin >> N >> M >> R;
    REP(i, M) {
        cin >> E[i].from >> E[i].to >> E[i].cost;
    }
    REP(i, N) {
        C[i] = INF;
    }
    C[R] = 0;

    bool cycle = false;
    REP(i, N + 1) {
        bool update = false;
        REP(e, M) {
            if (C[E[e].from] == INF)
                continue;
            ll c = C[E[e].from] + E[e].cost;
            if (C[E[e].to] > c) {
                C[E[e].to] = c;
                update = true;
            }
        }
        cycle = update;
        if (!update)
            break;
    }

    if (cycle)
        cout << "NEGATIVE CYCLE" << endl;
    else {
        REP(i, N) {
            if (C[i] == INF)
                cout << "INF" << endl;
            else
                cout << C[i] << endl;
        }
    }
    return 0;
}
