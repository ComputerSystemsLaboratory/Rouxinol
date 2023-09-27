#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const int MAX_V = 200;
const ll INF = 2000000000;
vector<vector<ll>> dist(MAX_V, vector<ll>(MAX_V, INF));

int main()
{
    int V, E;
    cin >> V >> E;
    for (int i = 0; i < E; i++)
    {
        int from, to;
        ll d;
        cin >> from >> to >> d;
        dist[from][to] = d;
    }

    for (int i = 0; i < V; i++)
    {
        dist[i][i] = 0;
    }

    for (int k = 0; k < V; k++)
    {
        for (int i = 0; i < V; i++)
        {
            if (dist[i][k] == INF)
                continue;
            for (int j = 0; j < V; j++)
            {
                if (dist[k][j] == INF)
                    continue;
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for (int i = 0; i < V; i++)
    {
        if (dist[i][i] < 0)
        {
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == INF)
            {
                cout << "INF";
            }
            else
            {
                cout << dist[i][j];
            }
            if (j != V - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

