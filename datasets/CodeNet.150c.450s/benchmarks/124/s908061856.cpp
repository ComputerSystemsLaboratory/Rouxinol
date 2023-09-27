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
    vector<pll> node;
};

Vertex V[105];
ll C[105];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll N;
    cin >> N;
    REP(i, N) {
        ll n, k;
        cin >> n >> k;
        REP(_, k) {
            ll v, c;
            cin >> v >> c;
            V[n].node.push_back(pll(v, c));
        }
    }
    REP(i, N) {
        C[i] = INF;
    }
    priority_queue<pll, vector<pll>, function<bool(pll, pll)>> q([](pll a, pll b) { return a.second > b.second; });
    q.push(pll(0, 0));
    C[0] = 0;
    while (!q.empty()) {
        pll t = q.top();
        q.pop();
        if (C[t.first] < t.second)
            continue;
        for (auto &n : V[t.first].node) {
            ll nxt = n.first;
            ll cost = n.second + t.second;
            if (C[nxt] <= cost)
                continue;
            C[nxt] = cost;
            q.push(pll(nxt, cost));
        }
    }

    REP(i, N) {
        cout << i << " " << C[i] << endl;
    }
    return 0;
}
