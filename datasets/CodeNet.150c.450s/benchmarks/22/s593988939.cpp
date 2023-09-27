#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll INF = 1e18;

int main()
{
    ll n, m, r;
    cin >> n >> m >> r;
    vector<vector<pair<ll,ll>>> hen(n);
    vector<ll> dist(n, INF);
    for(ll i = 0; i < m; i++) {
        ll a, b, d;
        cin >> a >> b >> d;
        hen[a].emplace_back(b, d);
    }

    {
        bool ok = true;
        ll cycle = 0;
        dist[r] = 0;
        while(ok) {
            ok = false;
            for(ll i = 0; i < n; i++) {
                if(dist[i] == INF)continue;
                for(auto j : hen[i]) {
                    if(dist[j.first] > dist[i] + j.second)ok = true;
                    dist[j.first] = min(dist[j.first], dist[i] + j.second);
                }
            }
            if(cycle >= 2 * n && ok) {
                cout << "NEGATIVE CYCLE" << endl;
                return 0;
            }
            cycle++;
        }
    }

    for(ll i = 0; i < n; i++) {
        if(dist[i] == INF) {
            cout << "INF" << endl;
        } else {
            cout << dist[i] << endl;
        }
    }


}
