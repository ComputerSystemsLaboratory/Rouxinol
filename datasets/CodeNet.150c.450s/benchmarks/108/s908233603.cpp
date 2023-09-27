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
using qi = queue<int>;
using Graph = vector<vector<int>>;

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define REP(i,n) for(int i=0;i<n;i++)

qi que;
vi dist;

void bfs(Graph &G) {
    while (!que.empty()) {
        int v = que.front();
        que.pop();

        for(int next_v : G[v]) {
            if (dist[next_v] != -1) continue;
            que.push(next_v);
            dist[next_v] = dist[v] + 1;
        }
    }
}

int main() {
	cin.tie(0);
   	ios::sync_with_stdio(false);

    int n; cin >> n;
    Graph G(n);
    REP(i, n) {
        int u; cin >> u;
        int k; cin >> k;
        REP(j, k) {
            int v; cin >> v;
            G[i].push_back(v-1);
        }
    }

    que.push(0);
    dist.assign(n, -1);
    dist[0] = 0;
    bfs(G);

    REP(i, n) {
        cout << (i+1) << " " << dist[i] << "\n";
    }
}
