#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define pb        emplace_back
#define fi        first
#define se        second
#define outl(x)   cout << (x) << '\n'
#define rep(i,n)     for(int i=0; i<(n); ++i)
typedef pair<int,int> pii;

int V, E;
vector<pii> G[100010];

int prim()
{
    vector<bool> used(V+1, false);
    priority_queue< pii, vector<pii>, greater<pii> > pq;
    int sum = 0;
    pq.emplace(pii(0,0));

    while ( !pq.empty() ) {
        const auto now = pq.top(); pq.pop();
        if (used[now.se]) continue;

        sum += now.fi;
        used[now.se] = true;
        for (const auto &e : G[now.se]) {
            pq.emplace(e);
        }
    }
    return sum;
}

signed main()
{
    cin.tie(0), ios::sync_with_stdio(false);

    cin >> V >> E;
    rep(i, E) {
        int s, t, w;
        cin >> s >> t >> w;
        G[s].pb(pii(w, t));
        G[t].pb(pii(w, s));
    }

    outl(prim());
}


