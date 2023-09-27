#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

#define FOR(i, n, m) for (ll(i) = (m); (i) < (n); ++(i))
#define REP(i, n) FOR(i, n, 0)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll)1e15;

struct Edge
{
    int from;
    int to;
    ll cost;
};

Edge E[2005];
ll D[1005];

int main()
{
    ll N, M, R;
    cin >> N >> M >> R;
    REP(i, M)
    {
        ll s, t, d;
        cin >> E[i].from >> E[i].to >> E[i].cost;
    }
    REP(i, N)
    {
        D[i] = INF;
    }

    ll l = 0;
    bool neg = false;
    D[R] = 0;
    while (true)
    {
        bool update = false;
        REP(i, M)
        {
            Edge e = E[i];
            if (D[e.from] == INF)
                continue;
            ll cost = D[e.from] + e.cost;
            if (D[e.to] <= cost)
                continue;
            D[e.to] = cost;
            update = true;
        }
        if (!update)
            break;
        if (l++ >= N)
        {
            neg = true;
            break;
        }
    }

    if (neg)
        cout << "NEGATIVE CYCLE" << endl;
    else
    {
        REP(i, N)
        {
            if (D[i] == INF)
                cout << "INF";
            else
                cout << D[i];
            cout << endl;
        }
    }

    return 0;
}
