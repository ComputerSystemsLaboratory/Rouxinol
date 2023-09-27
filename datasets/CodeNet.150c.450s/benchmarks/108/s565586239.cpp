#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

#define FOR(i, n, m) for(ll (i)=(m);(i)<(n);++(i))
#define REP(i, n) FOR(i,n,0)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll) 1e15;

struct Vertex {
    vector<ll> node;
};

Vertex V[105];
ll C[105];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll N;
    cin >> N;
    REP(i, N) {
        C[i] = INF;
    }
    REP(i, N) {
        ll n, k;
        cin >> n >> k;
        n--;
        REP(_, k) {
            ll v;
            cin >> v;
            v--;
            V[n].node.push_back(v);
        }
    }

    queue<pll> q;
    q.push(pll(0, 0));
    C[0] = 0;
    while (!q.empty()) {
        pll t = q.front();
        q.pop();
        ll cost = t.second + 1;
        for (auto &n:V[t.first].node) {
            if (C[n] <= cost)
                continue;
            C[n] = cost;
            q.push(pll(n, cost));
        }
    }

    REP(i, N) {
        cout << i + 1 << " ";
        if (C[i] == INF)
            cout << -1;
        else
            cout << C[i];
        cout << endl;
    }
    return 0;
}
