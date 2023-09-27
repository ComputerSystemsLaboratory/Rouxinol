#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i) 
#define PI acos(-1)

using namespace std;
using ll = long long;
using P = pair<int, int>;
using LP = pair<ll, ll>;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    vector<vector<P>> adj(n);
    rep(i, n) {
        int u, k, v, c;
        cin>>u>>k;
        rep(j, k) {
            cin>>v>>c;
            adj[u].push_back(P(c, v));
        }
    }

    priority_queue<P, vector<P>, greater<P>> q;
    vector<int> wmap(n, -1);
    q.push(P(0, 0));
    while (!q.empty()) {
        P p = q.top(); q.pop();
        int w = p.first;
        int v = p.second;
        if (wmap[v] != -1) continue;

        wmap[v] = w;
        for (auto e : adj[v]) {
            q.push(P(e.first + w, e.second));
        }
    }

    rep(i, n) cout<<i<<" "<<wmap[i]<<endl;
}
