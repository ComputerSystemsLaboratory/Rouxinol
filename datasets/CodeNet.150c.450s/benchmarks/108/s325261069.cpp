#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int n;
Graph G;

int main()
{
    cin >> n;
    G.resize(n);
    rep(i, n)
    {
        int id, k;
        cin >> id >> k;
        rep(j, k)
        {
            int v;
            cin >> v;
            G[i].push_back(v - 1);
        }
    }
    vector<int> dist(n, -1);
    queue<int> que;
    dist[0] = 0;
    que.push(0);
    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        for (int nv : G[v])
        {
            if (dist[nv] != -1)
                continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    rep(i, n)
    {
        cout << i + 1 << " " << dist[i] << endl;
    }
    return 0;
}
