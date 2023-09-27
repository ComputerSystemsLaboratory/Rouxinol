#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define vi vector<int>
#define vl vector<long long>
#define vvi vector< vector<int> >
#define vvl vector< vector<ll> >
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REPD(i, n) for (int i = (int)(n-1); i >= 0; i--)
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define FORD(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define INF 1e18
#define INFTY 1e9
#define MOD 1e9+7
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

template<class T> bool chmax(T &a, const T & b) {
    if (a<b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> bool chmin(T &a, const T & b) {
    if (a>b) {
        a = b;
        return true;
    }
    return false;
}

//cout << fixed << setprecision(10) << y << endl;
struct edge {int to, cost;};
vector< vector<edge> > es;
const int MAX_N = 10010;
vector<bool> seen;
vl d; //部分木からの最小距離
int V, E;

int prim() {
    int res = 0;
    priority_queue< P, vector<P>, greater<P> > que;
    que.push(P(0, 0));
    d[0] = 0;
    while(!que.empty()) {
        P p = que.top(); que.pop();
        int u = p.second;
        if (seen[u]) continue;
        seen[u] = true;
        res += p.first;
        REP(i, (int)es[u].size()) {
            edge e = es[u][i];
            if (d[e.to] > e.cost) {
                d[e.to] = e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
    return res;
}
int main() {
    cin >> V >> E;
    es.resize(V);
    seen.resize(V, false);
    d.resize(V, INF);
    REP(i, E) {
        int s, t, w;
        cin >> s >> t >> w;
        es[s].push_back(edge{t, w});
        es[t].push_back(edge{s, w});
    }
    int res = prim();
    cout << res << endl;
    return 0;
}
