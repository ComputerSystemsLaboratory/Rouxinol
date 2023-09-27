#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, int> P;
typedef pair<ll,pair<int, int> > P3;

const ll MOD = ll(1e9 + 7);
const ll LLINF = LLONG_MAX;
const int IINF = INT32_MAX;
const int MAX_N = int(1e5) + 5;
const int MAX_V = 100005;
const double EPS = 1e-8;
int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)

struct edge {
    ll to, cost;
};

vector<edge> G[MAX_V];
ll dmin[MAX_V];

void dijkstra(int s) {
    priority_queue<P, vector<P>, greater<P> > que; //小さいものから取り出す
    fill(dmin, dmin + MAX_V, LLINF);
    dmin[s] = 0;
    que.push(P(0, s));

    while (!que.empty()) {
        P p = que.top();
        que.pop();
        int v = p.second;
        if (dmin[v] < p.first)
            continue;
        for (auto &e : G[v]) {
            if (dmin[e.to] > dmin[v] + e.cost) {
                dmin[e.to] = dmin[v] + e.cost;
                que.push(P(dmin[e.to], e.to));
            }
        }
    }
}

int main() {
    int n,m,st;
    cin >> n >> m >> st;
    REP(i,m){
        ll u,v,c;
        cin >> u >> v >> c;
        G[u].push_back({v,c});
    }
    dijkstra(st);
    REP(i,n){
        if(dmin[i]==LLINF)cout << "INF" << endl;
        else cout << dmin[i] << endl;
    }
    return 0;
}

