#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<vector<bool>> G(n, vector<bool>(n));
    rep(i, n)
    {
        int u, k;
        cin >> u >> k;
        rep(j, k)
        {
            int v;
            cin >> v;
            G[u - 1][v - 1] = true;
        }
    }
    queue<int> Q;
    Q.push(0);
    vector<bool> visited(n);
    vector<int> dis(n, -1);
    visited[0] = true;
    dis[0] = 0;
    while (!Q.empty())
    {
        int v = Q.front();
        Q.pop();
        rep(i, n)
        {
            if (G[v][i] && !visited[i])
            {
                Q.push(i);
                dis[i] = dis[v] + 1;
                visited[i] = true;
            }
        }
    }
    rep(i, n) printf("%d %d\n", i + 1, dis[i]);
    return 0;
}
