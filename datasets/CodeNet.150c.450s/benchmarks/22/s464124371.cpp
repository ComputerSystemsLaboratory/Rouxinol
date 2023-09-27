#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(m) cout << m << endl
typedef long long ll;
typedef unsigned long long ull;

const int INF = 1e9;

struct edge
{
    int from, to, cost;
};

edge es[2000];

int main()
{

    int v, e, r;
    cin >> v >> e >> r;

    rep(i, e) cin >> es[i].from >> es[i].to >> es[i].cost;

    int d[v];
    rep(i, v) d[i] = INF;
    d[r] = 0;
    int cnt = 0;

    while (1)
    {
        bool update = 0;
        rep(i, e)
        {
            if (d[es[i].from] != INF && d[es[i].from] + es[i].cost < d[es[i].to])
            {
                d[es[i].to] = d[es[i].from] + es[i].cost;
                update = 1;
            }
        }
        if (!update)
            break;
        cnt++;
        if (cnt == v - 1)
        {
            OP("NEGATIVE CYCLE");
            return 0;
        }
    }
    rep(i, v) d[i] == 1e9 ? OP("INF") : OP(d[i]);

    return 0;
}
