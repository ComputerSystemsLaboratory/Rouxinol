#include <bits/stdc++.h>
#define rep(i, start, end) for (long long i = start; i < end; ++i)
#define srt(x) sort((x).begin(), (x).end());
#define rsrt(x) sort((x).rbegin(), (x).rend());
#define deb(x) cout<<#x<<" = "<<(x)<<" (L"<<LINE<<")"<<endl;
#define vdeb(x) {cout<<#x<<" = { "; rep(i, x.size()) cout<<x[i]<<' '; cout <<'}'<<" (L"<<LINE<<")"<<endl;}
using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vivi = vector<vi>;
using vll = vector<long long>;
using vllvll = vector<vll>;
using vs = vector<string>;
using um = unordered_map<long long, long long>;
const long long INF = 1LL << 60;
const long long MOD = 1e9 + 7;

class UnionFind
{   
public:
    static const int N_MAX = 1000000;
    int par[N_MAX];
    int n;
    
    UnionFind(int n)
        : n{n}
    {
        for (int i = 0; i < n; ++i) {
            par[i] = i;
        }
    }
    
    int root(int x)
    {
        if (par[x] == x) {
            return x;
        }
        return par[x] = root(par[x]);
    }
    
    bool same(int x, int y)
    {
        return root(x) == root(y);
    }
    
    void unite(int x, int y)
    {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) {
            return;
        }
        par[ry] = root(x);
        return;
    }
    
    int groups()
    {
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (root(i) == i)
            ++cnt;
        }
        return cnt;
    }
};


class Edge
{
public:
    ll from;
    ll to;
    ll cost;
    Edge() : to{0}, cost{0} {}
    Edge(ll to, ll cost) : to{to}, cost{cost} {}
    Edge(ll from, ll to, ll cost) : from{from}, to{to}, cost{cost} {}
    bool operator<(const Edge& rhs) const {
        return cost < rhs.cost;
    }
};

long long kruskal(vector<Edge>& edges, long long n)
{
    sort(edges.begin(), edges.end());
    UnionFind uf(n);
    long long min_cost = 0;

    for (Edge e : edges) {
        if (! uf.same(e.from, e.to)) {
            uf.unite(e.from, e.to);
            min_cost += e.cost;
        }
    }
    return min_cost;
}

int main()
{
    ll V, E;
    cin >> V >> E;
    vector<Edge> edges(E);
    ll s, t, w;
    rep(i, 0, E) {
        cin >> s >> t >> w;
        edges[i].from = s;
        edges[i].to = t;
        edges[i].cost = w;
    }
    ll ans;
    ans = kruskal(edges, V);
    cout << ans << endl;
}
