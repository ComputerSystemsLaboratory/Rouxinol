#include <iostream>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include <utility>
#include <algorithm>
#include <functional>
#include <vector>
#include <numeric>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vb = vector<bool>;
using Graph = vector<vector<int>>;

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define REP(i,n) for(int i=0;i<n;i++)

vb seen;
vi k;
vi d;
vi f;

int dfs(const Graph &G, int v, int t) {
    seen[v] = true;
    d[v] = t;
    REP(i, k[v]) {
        int next_v = G[v][i];
        if (seen[next_v]) continue;
        t = dfs(G, next_v, t+1);
    }
    t += 1;
    f[v] = t;
    return t;
}

int main () {
	cin.tie(0);
   	ios::sync_with_stdio(false);

    int n; cin >> n;
    Graph G(n);
    REP(i, n) {
        int u; cin >> u;
        int tmp; cin >> tmp;
        k.push_back(tmp);
        REP(j, tmp) {
            int v; cin >> v;
            G[i].push_back(v-1);
        }
    }

    seen.assign(n, false);
    d.assign(n, 0);
    f.assign(n, 0);

    int t = 0;
    REP(i, n) {
        if (seen[i]) continue;
        t = dfs(G, i, t+1);
    }

    REP(i, n) {
        cout << (i+1) << " " << d[i] << " " << f[i] << "\n";
    }
}
