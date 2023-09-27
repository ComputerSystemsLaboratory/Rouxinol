#include <bits/stdc++.h>
using namespace std;
const long long INF = 123456789;
const long long MOD = 1000000007;
const long double PI = 3.1415926;
#define FOR(i, r, n) for (ll i = (ll)(r); i < (ll)(n); i++)
#define RFOR(i, r, n) for (ll i = (ll)(n - 1); i >= r; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define RALL(x) x.rbegin(), x.rend()
typedef long long int ll;
typedef vector<ll> vi;
typedef vector<pair<ll, ll>> vp;
typedef vector<string> vs;
typedef vector<char> vc;
typedef list<ll> lst;
typedef pair<ll, ll> P;

ll n, m, k, ans = 0, sum = 0, cnt = 0;
string s;
char c;

#define Endl endl

/*--------------------template--------------------*/

class UF
{
  public:
    vi rank, p;
    UF() {}
    UF(ll size)
    {
        rank.resize(size, 0);
        p.resize(size, 0);
        REP(i, size)
        {
            makeSet(i);
        }
    }

    void makeSet(ll x)
    {
        p[x] = x;
        rank[x] = 0;
    }

    bool same(ll x, ll y)
    {
        return findSet(x) == findSet(y);
    }

    void unite(ll x, ll y)
    {
        link(findSet(x), findSet(y));
    }

    void link(ll x, ll y)
    {
        if (rank[x] > rank[y])
        {
            p[y] = x;
        }
        else
        {
            p[x] = y;
            if (rank[x] == rank[y])
            {
                rank[y]++;
            }
        }
    }

    ll findSet(ll x)
    {
        if (x != p[x])
        {
            p[x] = findSet(p[x]);
        }
        return p[x];
    }
};

class Edge
{
  public:
    ll source, target, cost;
    Edge(ll source = 0, ll target = 0, ll cost = 0) : source(source), target(target), cost(cost) {}
    bool operator<(const Edge &e) const
    {
        return cost < e.cost;
    }
};

ll kruskal(ll n, vector<Edge> edges)
{
    ll totalCost = 0;
    sort(ALL(edges));
    UF dset = UF(n + 1);
    REP(i, n)
    {
        dset.makeSet(i);
    }
    ll source, target;
    REP(i, edges.size())
    {
        Edge e = edges[i];
        if (!dset.same(e.source, e.target))
        {
            totalCost += e.cost;
            dset.unite(e.source, e.target);
        }
    }
    return totalCost;
}

int main()
{
    ll cost, source, target;
    cin >> n >> m;
    vector<Edge> edges;
    REP(i, m)
    {
        cin >> source >> target >> cost;
        edges.push_back(Edge(source, target, cost));
    }

    cout << kruskal(n, edges) << endl;
}