#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
const ll INF = 1001001001;

int main()
{

    int V, e;
    ll r;
    cin >> V >> e >> r;
    pair<int, int> bridges[e];
    ll cost[e];
    vector<ll> d(V, INF);
    d[r] = 0;
    rep(i, e)
    {
        int s, t;
        ll d;
        cin >> s >> t >> d;
        bridges[i].first = s;
        bridges[i].second = t;
        cost[i] = d;
    }
    rep(i, V)
    {
        bool update = false;
        rep(j, e)
        {
            int u = bridges[j].first, v = bridges[j].second;
            if (d[v] > d[u] + cost[j] && d[u] != INF)
            {
                d[v] = d[u] + cost[j];
                update = true;
            }
        }
        if (update && i == V - 1)
        {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
        if (!update)
            break;
    }
    rep(i, V)
    {
        if (d[i] == INF)
            cout << "INF" << endl;
        else
            cout << d[i] << endl;
    }
    return 0;
}

// accepted
