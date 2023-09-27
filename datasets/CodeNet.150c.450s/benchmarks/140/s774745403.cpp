#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

#define FOR(i, n, m) for (ll(i) = (m); (i) < (n); ++(i))
#define REP(i, n) FOR(i, n, 0)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll)1e15;

struct UnionFind
{
    void init(int n)
    {
        mN = n;
        mNodeTbl.resize(mN);
        REP(i, mN)
        {
            mNodeTbl[i] = i;
        }
    }
    int find(int x)
    {
        if (x == mNodeTbl[x])
            return x;
        return mNodeTbl[x] = find(mNodeTbl[x]);
    }
    bool same(int x, int y)
    {
        return find(x) == find(y);
    }
    void unit(int x, int y)
    {
        x = find(x);
        y = find(y);
        mNodeTbl[x] = y;
    }

    int mN;
    vector<int> mNodeTbl;
};

struct Edge
{
    int a;
    int b;
    ll w;
};

Edge e[100005];

int main()
{
    int V, E;
    cin >> V >> E;
    REP(i, E)
    {
        cin >> e[i].a >> e[i].b >> e[i].w;
    }
    sort(e, e + E, [](Edge a, Edge b) { return a.w < b.w; });
    UnionFind uf;
    uf.init(V);
    ll cost = 0;
    REP(i, E)
    {
        Edge t = e[i];
        if (uf.same(t.a, t.b))
            continue;
        cost += t.w;
        uf.unit(t.a, t.b);
    }
    cout << cost << endl;
    return 0;
}
