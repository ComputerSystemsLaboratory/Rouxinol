#include <cstdio>
#include <cstring>
#include <cmath>
#include <utility>
#include <iostream>
#include <algorithm>
#include <vector>
#include <forward_list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#define rep(i, s, g) for ((i) = (s); (i) < (g); ++(i))
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const ll MOD = 1e9 + 7;
const ll INF = (1e18) + 1;

struct edge
{
    ll from;
    ll to;
    ll cost;
};

int V, E, r;
edge e[2010];
ll d[1010];

bool bf(int s)
{
    int i;
    bool update = true;
    int upcount = 0;

    rep(i, 0, V)
    {
        d[i] = INF;
    }

    d[s] = 0;

    while (update)
    {
        update = false;
        upcount++;

        if (upcount > V)
        {
            return false;
        }

        rep(i, 0, E)
        {
            if (d[e[i].from] != INF && d[e[i].to] > d[e[i].from] + e[i].cost)
            {
                d[e[i].to] = d[e[i].from] + e[i].cost;
                update = true;
            }
        }
    }

    return true;
}

int main(void)
{
    int i;
    int x, y, z;
    bool update = false;

    cin >> V >> E >> r;

    rep(i, 0, E)
    {
        cin >> x >> y >> z;
        e[i].from = x;
        e[i].to = y;
        e[i].cost = z;
    }
    if (bf(r))
    {
        rep(i, 0, V)
        {
            if (d[i] == INF)
            {
                cout << "INF" << endl;
            }
            else
            {
                cout << d[i] << endl;
            }
        }
    }
    else
    {
        cout << "NEGATIVE CYCLE" << endl;
    }
}
