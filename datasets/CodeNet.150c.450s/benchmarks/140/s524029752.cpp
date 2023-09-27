#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

struct union_find {
    vector<int> par, sz;

    union_find(int n) {
        par.resize(n);
        sz.resize(n);
        for (int i =0; i < n; i++)
            par[i] = i, sz[i] = 0;
    }

    int find(int x) {
        if (par[x] == x)
            return x;
        else 
            return par[x] = find(par[x]);
    }

    void unite(int x, int y) {
        x = find(x), y = find(y);

        if (x == y) return ;

        else if (sz[x] < sz[y])
            par[x] = y;
        else {
            par[y] = x;
            if (sz[x] == sz[y])
                sz[x]++;
        }
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }
};

typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, P> PP;

ll minimum_spanning_tree(int n, vector<PP> &G) {
    ll ans = 0;
    union_find uf(n);
    sort(G.begin(), G.end());

    for (int i = 0; i < G.size(); i++) {
        int u = G[i].second.first;
        int v = G[i].second.second;
        ll cost = G[i].first;

        if (uf.same(u, v))
            continue;

        else  {
            uf.unite(u, v);
            ans += cost;
        }
    }
    
    return ans;
}

int main() {
    int V, E;   cin >> V >> E;
    vector<PP> G;
    for (int i = 0; i < E; i++) {
        int s, t;   ll w;
        cin >> s >> t >> w;
        G.push_back(PP(w, P(s, t)));
    }

    ll ans = minimum_spanning_tree(V, G);

    cout << ans << endl;

    return 0;
}
