#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
template<class T> bool chmin(T &a, T b) {if(a>b) {a=b;return 1;}return 0;}
using namespace std;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
using P = pair<int,int>;
const ll inf = 1e18;

// union-find
vint par;
vint depth;

void init (int n) {
    rep(i,n) {
        par[i] = i;
        depth[i] = 0;
    }
}

int find(int x) {
    if (par[x] == x) return x;
    else return par[x] = find(par[x]);
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return;
    if (depth[x] < depth[y]) par[x] = y;
    else {
        par[y] = x;
        if (depth[x] == depth[y]) depth[x]++;
    }
}

bool same(int x, int y) {return find(x) == find(y);}

// kruscal
struct edge {int u, v, cost;};

bool comp(const edge &e1, const edge &e2) {
    return e1.cost < e2.cost;
}

edge es[100005];
int V, E;

int kruskal() {
    sort(es,es+E,comp);
    init(V);
    int res = 0;
    rep(i,E) {
        edge e = es[i];
        if (!same(e.u,e.v)) {
            unite(e.u,e.v);
            res += e.cost;
        }
    }
    return res;
}

int main() {
    cin >> V >> E;
    par.resize(V);
    depth.resize(V);
    rep(i,E) {
        int s, t, w;
        cin >> s >> t >> w;
        es[i].u = s; es[i].v = t; es[i].cost = w;
    }
    cout << kruskal() << endl;
}
