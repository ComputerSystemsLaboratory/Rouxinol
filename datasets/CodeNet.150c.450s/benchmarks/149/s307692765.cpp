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

int main()
{
    ll n, a, b, q, t;
    cin >> n >> q;
    UF ds = UF(n);

    REP(i, q)
    {
        cin >> t >> a >> b;
        if (t == 0)
        {
            ds.unite(a, b);
        }
        else if (t == 1)
        {
            if (ds.same(a, b))
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
}