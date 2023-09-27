#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <queue>
#include <vector>
using namespace std;

const int maxn = 100000 + 5;
int color[maxn];
bool vis[maxn];
vector <int> G[maxn];

void dfs(int u, int c)
{
    vis[u] = true;
    color[u] = c;

    for (int i = 0; i < G[u].size(); i++)
        if (!vis[G[u][i]])
        dfs(G[u][i], c);
}

int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        for (int i = 0; i < n; i++)
            G[i].clear();

        int u, v;
        for (int i = 0; i < m; i++)
        {
            scanf("%d %d", &u, &v);
            G[u].push_back(v);
            G[v].push_back(u);
        }

        memset(color, 0, sizeof(color));
        memset(vis, false, sizeof(vis));

        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                ++c;
                dfs(i, c);
            }
        }

        int q;
        scanf("%d", &q);
        while (q--)
        {
            int u, v;
            scanf("%d %d", &u, &v);
            if (color[u] == color[v])
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}


