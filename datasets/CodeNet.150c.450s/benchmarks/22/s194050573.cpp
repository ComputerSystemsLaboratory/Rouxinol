#include <bits/stdc++.h>
#define repd(i, a, b) for (int i = (a); i < (b); i++)
#define rep(i, n) repd(i, 0, n)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

struct edge
{
    int from;
    int to;
    int cost;
};

int main()
{
    int V, E, r;
    cin >> V >> E >> r;

    vector<edge> es(E);
    vector<int> dist(V, INF);

    rep(i, E)
    {
        int s, t, d;
        cin >> s >> t >> d;
        es[i] = {s, t, d};
    }

    dist[r] = 0;
    bool flag = true;
    int cnt = 0;

    while (flag)
    {
        if (cnt == V)
        {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
        flag = false;
        rep(i, E)
        {
            edge e = es[i];
            if (dist[e.from] != INF && dist[e.to] > dist[e.from] + e.cost)
            {
                dist[e.to] = dist[e.from] + e.cost;
                flag = true;
            }
        }
        cnt++;
    }

    rep(i, V)
    {
        if (dist[i] == INF)
        {
            cout << "INF" << endl;
        }
        else
        {
            cout << dist[i] << endl;
        }
    }

    return 0;
}

