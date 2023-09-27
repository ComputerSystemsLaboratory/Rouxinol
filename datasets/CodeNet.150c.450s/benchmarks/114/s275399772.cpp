#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>


using namespace std;


using ll = long long;


const ll MAX = 100;


ll adj[MAX][MAX];
ll d[MAX] = {};
bool finished[MAX] = {};
ll n;


void msp()
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push(make_pair(0, 0));

    while (!pq.empty()) {
        auto p = pq.top(); pq.pop();
        if (finished[p.second])
            continue;

        for (ll j = 0; j < n; j++) {
            if (adj[p.second][j] == -1 || finished[j])
                continue;
            pq.push(make_pair(adj[p.second][j], j));
        }
        // cout << p.second << ": " << p.first << endl;
        d[p.second] = p.first;
        finished[p.second] = true;
    }
}


int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0;j < n; j++) {
            cin >> adj[i][j];
        }
    }

    msp();

    ll acc = 0;
    for (ll i = 0; i < n; i++)
        acc += d[i];
    cout << acc << endl;
}

