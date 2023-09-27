#include <iostream>
#include <queue>
#include <vector>
using namespace std;

#define INF 1e+10
#define MAX_V 10000

struct edge {
    long long to;
    long long cost;
};

// <最短距離, 頂点の番号>
using P = pair<long long, long long>;

long long V;
vector<edge> G[MAX_V];
long long d[MAX_V];

void prim(long long s) {
    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d+V, INF);
    d[s] = 0;
    que.push(P(0, s));

    while (!que.empty()) {
        P p = que.top();
        que.pop();
        long long v = p.second;
        if (d[v] < p.first) continue;
        d[v] = -d[v];
        for (long long i=0; i<G[v].size(); ++i) {
            edge e = G[v][i];
            if (d[e.to] > e.cost) {
                d[e.to] = e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
}

int main() {
    cin >> V;
    long long E;
    cin >> E;
    for (long long i=0; i<E; ++i) {
        long long a, b, c;
        cin >> a >> b >> c;
        edge e = {b, c};
        G[a].push_back(e);
        edge e2 = {a, c};
        G[b].push_back(e2);
    }
    prim(0);
    long long sum = 0;
    for(long long i=0; i<V; i++){
        sum += -d[i];
    }
    cout << sum << endl;
    return 0;
}
