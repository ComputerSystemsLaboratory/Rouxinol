#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

typedef long long ll;
typedef pair<int, int> P;

#define MAX 100005
#define INF INT_MAX

struct Edge {
    int to;
    int cost;
};

int main(int, char**)
{
    int n;
    cin >> n;

    vector< vector<Edge> > G(n);
    rep(i,n) {
        int u, k;
        cin >> u >> k;
        rep(j,k) {
            int v, c;
            cin >> v >> c;
            G[u].push_back({v, c});
        }
    }
    priority_queue<P> q;
    vector<int> d(n, INF);
    d[0] = 0;
    q.push({0, 0});
    while (!q.empty()) {
        int v, c;
        tie(c,v) = q.top(); q.pop();
        if (d[v] < c) continue;
        for (auto e : G[v]) {
            if (d[e.to] <= d[v] + e.cost) continue;
            d[e.to] = d[v] + e.cost;
            q.push({d[e.to], e.to});
        }
    }
    rep(i,n) cout << i << " " << d[i] << endl;

    return 0;
}

