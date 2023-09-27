#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

typedef pair<int, int> P;

#define INF 1145141919810

struct edge {
    int to, cost;
};

vector<edge> G[100010];
long long d[100010];

int main() {
    int v, e, r;
    scanf("%d", &v);
    scanf("%d", &e);
    scanf("%d", &r);
    for (int i = 0; i < e; i++) {
        int s, t, d;
        scanf("%d", &s);
        scanf("%d", &t);
        scanf("%d", &d);
        edge e;
        e.to = t;
        e.cost = d;
        G[s].push_back(e);
    }
    fill(d, d + v, INF);
    d[r] = 0;

    priority_queue<P, vector<P>, greater<P> > q;

    q.push(P(0, r));

    while (!q.empty()) {
        P p = q.top();
        q.pop();
        int v = p.second;
        if (d[v] < p.first) { continue; }
        for (int i = 0, size = G[v].size(); i < size; i++) {
            edge e = G[v][i];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                q.push(P(d[e.to], e.to));
            }
        }
    }

    for (int i = 0; i < v; i++) {
        if (d[i] == INF) {
            printf("INF\n");
        } else {
            printf("%lld\n", d[i]);
        }
    }
}