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
typedef pair<ll, int> P;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
const ll INF = 1000000000000000;

struct edge {
    int to;
    ll cost;
    edge(int t, ll c) : to(t), cost(c) {}
    edge() {}
};

const int MAXV = 100010;
const int MAXE = 500020;
vector<edge> G[MAXV];
ll dist[MAXV];

void dijkstra(int s) {
    for (int i = 0; i < MAXV; i++) dist[i] = INF;
    priority_queue<P, vector<P>, greater<P> > que;
    que.push(make_pair(0, s));
    dist[s] = 0;
    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.second;
        if (dist[v] < p.first) continue;
        for (int i = 0; i < G[v].size(); i++) {
            edge e = G[v][i];
            int next = e.to;
            if (dist[next] > dist[v] + e.cost) {
                dist[next] = dist[v] + e.cost;
                que.push(make_pair(dist[next], next));
            }
        }
    }
}

int main(void) {
    int V, E, r;
    cin >> V >> E >> r;
    for (int i = 0; i < E; i++) {
        int s, t;
        ll d;
        cin >> s >> t >> d;
        G[s].push_back(edge(t, d));
    }
    dijkstra(r);
    for (int i = 0; i < V; i++) {
        if (dist[i] >= INF) cout << "INF" << endl;
        else cout << dist[i] << endl;
    }
    return 0;
}