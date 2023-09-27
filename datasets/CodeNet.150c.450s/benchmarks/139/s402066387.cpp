#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    
    vector<vector<int>> G(N);
    for (int i=0; i<M; ++i)
    {
        int a, b;
        cin >> a >> b;
        G[a-1].push_back(b-1);
        G[b-1].push_back(a-1);
    }

    vector<int> dist(N, -1);
    queue<int> que;

    dist[0] = 0;
    que.push(0);
    
    while (!que.empty())
    {
        int v = que.front();
        que.pop();

        for (int nv : G[v])
        {
            if (dist[nv]!=-1) continue;

            dist[nv] = v;
            que.push(nv);
        }
    }
    cout << "Yes" << endl;
    for (int v = 1; v < N; v++) cout << dist[v]+1 << endl;
    
}