#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<vector<int>> Graph; //隣接行列でグラフを表現

int main()
{
    ll N, M;
    cin >> N >> M;

    Graph G(N);
    for (int i = 0; i < M; ++i)
    {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        G[a].emplace_back(b);
        G[b].emplace_back(a);
    }

    vector<int> dist(N, -1);
    vector<int> prev_room(N, -1);
    queue<int> que;

    dist[0] = 0;
    que.push(0);

    while (!que.empty())
    {
        int vertex = que.front();
        que.pop();

        for (int next_vertex : G[vertex])
        {
            if (dist[next_vertex] != -1) continue;

            dist[next_vertex] = dist[vertex] + 1;
            prev_room[next_vertex] = vertex;
            que.push(next_vertex);
        }
    }
    cout << "Yes" << endl;

    for (int i = 1; i < N; ++i) cout << prev_room[i] + 1 << endl;
    return 0;
}
