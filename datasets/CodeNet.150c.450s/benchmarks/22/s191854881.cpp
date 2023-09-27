#include <bits/stdc++.h>
using namespace std;
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return 1;
    }
    return 0;
}
typedef long long int ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MOD (1000000007)
#define ALL(v) (v).begin(), (v).end()
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

//-------------------------------------

const int MAX_E = 100000;
const int MAX_V = 100000;

struct edge
{
    int from;
    int to;
    int cost;
}; // 頂点fromから頂点toへのコストcostの辺

edge es[MAX_E]; // 辺
int d[MAX_V];   // 最短距離
int V, E;       // Vは頂点数,Eは辺の数

// s番目の頂点から各頂点への最短距離を求める
bool bellman_ford(int s)
{
    for (int i = 0; i < V; i++)
    {
        d[i] = INF;
    }
    d[s] = 0;

    int cnt = 0;

    while (true)
    {
        bool update = false;
        for (int i = 0; i < E; i++)
        {
            edge e = es[i];
            if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost)
            {
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if (!update)
        {
            return true;
        }
        if (cnt >= V)
        {
            return false;
        }
        cnt++;
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int s;
    cin >> V >> E >> s;
    for (int i = 0; i < E; i++)
    {
        cin >> es[i].from >> es[i].to >> es[i].cost;
    }
    bool flg = bellman_ford(s);
    if (!flg)
    {
        cout << "NEGATIVE CYCLE" << endl;
    }
    else
    {
        for (int i = 0; i < V; i++)
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
}
