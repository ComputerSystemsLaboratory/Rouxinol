#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
const ll INF = 1000000000000000;

struct edge {
    int from, to;
    ll cost;
    edge(int f, int t, ll c) : from(f), to(t), cost(c) {}
    edge() {}
};

const int MAXV = 1024;
const int MAXE = 2048;
edge es[MAXE];
ll dist[MAXV];

int main(void) {
    int V, E, r;
    cin >> V >> E >> r;
    for (int i = 0; i < E; i++) {
        int s, t;
        ll d;
        cin >> s >> t >> d;
        es[i] = edge(s, t, d);
    }
    for (int i = 0; i < V; i++) {
        dist[i] = INF;
    }
    dist[r] = 0;
    int cnt = 0;
    while (1) {
        bool update = false;
        for (int i = 0; i < E; i++) {
            edge e = es[i];
            if (dist[e.to] > dist[e.from] + e.cost && dist[e.from] != INF) {
                dist[e.to] = dist[e.from] + e.cost;
                update = true;
            }
        }
        if (!update) break;
        cnt++;
        if (cnt > V) {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }
    for (int i = 0; i < V; i++) {
        if (dist[i] >= INF) cout << "INF" << endl;
        else cout << dist[i] << endl;
    }
    return 0;
}