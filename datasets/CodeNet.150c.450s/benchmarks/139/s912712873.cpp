#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 1e9;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> list(n);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        list[a].push_back(b);
        list[b].push_back(a);
    }

    queue<int> q;
    vector<int> dist(n, INF);
    vector<int> pre(n, -1);
    dist[0] = 0;
    q.push(0);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int nv : list[v])
        {
            if (dist[nv] != INF)
            {
                continue;
            }
            dist[nv] = dist[v] + 1;
            pre[nv] = v;
            q.push(nv);
        }
    }

    cout << "Yes" << endl;
    for (int i = 1; i < n; i++)
    {
        cout << pre[i] + 1 << endl;
    }
    return 0;
}