#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF 9223372036854775807

#define N 100

int G[N][N];
int d[N];

void dijkstra(int s, int n)
{
    int visited[n], p[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
        d[i] = INF;
    }
    d[s] = 0;

    while (true)
    {
        int mincost = INF;
        int u = -1;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i] && d[i] < mincost)
            {
                mincost = d[i];
                u = i;
            }
        }

        if (u == -1)
            break;

        visited[u] = 1;
        for (int i = 0; i < n; i++)
        {
            if (G[u][i] != INF && !visited[i])
            {
                if (d[u] + G[u][i] < d[i])
                {
                    d[i] = d[u] + G[u][i];
                    p[i] = u;
                }
            }
        }
    }
}

signed main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            G[i][j] = INF;

    for (int i = 0; i < n; i++)
    {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++)
        {
            int v, c;
            cin >> v >> c;
            G[u][v] = c;
        }
    }

    dijkstra(0, n);

    for (int i = 0; i < n; i++)
        cout << i << ' ' << d[i] << endl;
}

