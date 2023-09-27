#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <string.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> edgeTo;
typedef pair<int, ll> distTo;

#define maxN 500000
#define INF 1e18

vector<edgeTo> g[maxN];
priority_queue<distTo, vector<distTo>, greater<distTo> > q;
int n, m, s;
ll d[maxN]; //d[u]: do dai dd ngan nhat tu s den u

void ReadGraph()
{
    int u, v, c;
    cin>>n>>m>>s;
    for (int i = 0; i < m; ++i)
    {
        cin>>u>>v>>c;
        g[u].push_back(edgeTo(v, c));
    }
}

void Init()
{
    for (int u = 0; u < n; ++u)
        d[u] = INF;
    d[s] = 0;
    q.push(distTo(s, d[s]));
}

void Solve()
{
    Init();
    while (!q.empty())
    {
        int u = (int)q.top().first; ll du = (ll)q.top().second;
        q.pop();

        if (du != d[u]) continue;

        for (int i = 0; i < g[u].size(); ++i)
        {
            int v = (int)g[u][i].first, c = (int)g[u][i].second;
            if (d[v] > d[u] + c)
            {
                d[v] = d[u] + c;
                q.push(distTo(v, d[v]));
            }
        }
    }
}

void WriteANS()
{
    for (int u = 0; u < n; ++u)
    {
        if (d[u] == INF)
            cout<<"INF\n";
        else cout<<d[u]<<"\n";
    }
}

int main()
{
    ReadGraph();
    Solve();
    WriteANS();
    return 0;
}