#include <bits/stdc++.h>
using namespace std;
const long long INF = (1LL<<32);
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

static const int MAX = 100;
ll d[MAX][MAX];

void floyd()
{
    REP(k, n)
    {
        REP(i, n)
        {
            if (d[i][k] == INF)
            {
                continue;
            }
            REP(j, n)
            {
                if (d[k][j] == INF)
                {
                    continue;
                }
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
}

int main()
{
    ll e, u, v, c;
    cin >> n >> e;
    REP(i, n)
    {
        REP(j, n)
        {
            d[i][j] = ((i == j) ? 0 : INF);
        }
    }
    REP(i, e)
    {
        cin >> u >> v >> c;
        d[u][v] = c;
    }

    floyd();

    bool negative = false;
    REP(i, n)
    {
        if (d[i][i] < 0)
        {
            negative = true;
        }
    }
    if (negative)
    {
        cout << "NEGATIVE CYCLE" << endl;
    }
    else
    {
        REP(i, n)
        {
            REP(j, n)
            {
                if (j)
                {
                    cout << " ";
                }
                if (d[i][j] == INF)
                {
                    cout << "INF";
                }
                else
                {
                    cout << d[i][j];
                }
            }
            cout << endl;
        }
    }
}