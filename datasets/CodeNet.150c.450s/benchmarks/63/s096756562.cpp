#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;

const ll INF = LONG_LONG_MAX;
vector<P>edge[500010];

int main() {
    int v, e, r;
    cin >> v >> e >> r;
    rep(i, e) {
        int s, t, d;
        cin >> s >> t >> d;
        edge[s].push_back(P(t, d));
    }
    //dijkstra
    priority_queue<P, vector<P>, greater<P> > q;
    vector<ll>dist(v, INF);
    dist[r] = 0;
    q.push(P(0, r));
    while (!q.empty()) {
        ll d = q.top().first;
        ll prev = q.top().second;
        q.pop();
        if (dist[prev] < d)continue;
        for (auto next:edge[prev]) {
            ll to = next.first;
            ll cost = next.second;
            if (dist[prev] + cost<dist[to]) {
                dist[to] = dist[prev]+cost;
                q.push(P(dist[to], to));
            }
        }
    }
    //output
    rep(i, v) {
        if (dist[i] == INF)cout << "INF" << endl;
        else cout << dist[i] << endl;
    }
    return 0;
}
