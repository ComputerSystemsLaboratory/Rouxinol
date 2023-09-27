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

#define int long long

struct edge {
    int to;
    int cost;
};

using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vb = vector<bool>;
using qi = queue<int>;
using P = pair<int, int>;
using graph = vector<vector<edge>>;

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define REP(i,n) for(int i=0;i<n;i++)

const int inf = 1LL << 60;
// const int inf = 100000000;
const int mod = 1000000007;

const int maxn = 100000;
int n, m, r;
// vii dist(maxn);
graph G(maxn);
vi mindist(maxn);

void dijkstra() {

    mindist.assign(n, inf);
    priority_queue<P, vector<P>, greater<P>> pq;
    mindist[r] = 0;
    pq.emplace(mindist[r], r);
    while (!pq.empty()) {
        P p = pq.top();
        pq.pop();
        int v = p.second;
        if (mindist[v] < p.first) continue;
        for (auto &e : G[v]) {
            if (mindist[e.to] > mindist[v] + e.cost) {
                mindist[e.to] = mindist[v] + e.cost;
                pq.emplace(mindist[e.to], e.to);
            }
        }
    }
}

signed main () {
	cin.tie(0);
   	ios::sync_with_stdio(false);

    cin >> n >> m >> r;


    REP(i, m) {
        edge e;
        int s; cin >> s >> e.to >> e.cost;
        G[s].push_back(e);
        // dist[s][t] = d;
    }

    dijkstra();

    REP(i, n) {
        if (mindist[i] == inf) {
            cout << "INF\n";
        } else {
            cout << mindist[i] << "\n";
        }
    }
}

