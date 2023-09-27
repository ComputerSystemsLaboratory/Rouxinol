#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>


using namespace std;

using ll = long long;

const ll MAX = 100;


ll edges[MAX][MAX];
bool finished[MAX] = {};
ll d[MAX];
ll n;


void dijkstra()
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push(make_pair(0, 0));

    while (!pq.empty()) {
        auto p = pq.top();
        pq.pop();

        if (finished[p.second])
            continue;

        for (ll i = 0; i < n; i++) {
            if (!(edges[p.second][i] > 0) || finished[i])
                continue;
            pq.push(make_pair(p.first + edges[p.second][i], i));
        }
        finished[p.second] = true;
        d[p.second] = p.first;
    }
}


int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++) {
        ll u, k;
        cin >> u >> k;
        for (ll j = 0; j < k; j++) {
            ll v, c;
            cin >> v >> c;
            edges[u][v] = c;
        }
    }

    dijkstra();

    for (ll i = 0; i < n; i++) {
        cout << i << " " << d[i] << endl;
    }
}

