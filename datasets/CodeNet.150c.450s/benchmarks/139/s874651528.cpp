#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)
using Graph = vector<vector<int>>;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // 頂点数と辺数
    int N, M;
    cin >> N >> M;

    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G(N);
    for (int i = 0; i < M; ++i)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
    vector<int> prev(N, -1);
    queue<int> que;

    dist[0] = 0;
    que.push(0);

    while (!que.empty())
    {
        int v = que.front();
        que.pop();

        // v から辿れる頂点をすべて調べる
        for (int nv : G[v])
        {
            if (dist[nv] == -1)
            {
                dist[nv] = dist[v] + 1;
                prev[nv] = v;
                que.push(nv);
            }
        }
    }

    // 結果出力 (各頂点の頂点 0 からの距離を見る)
    cout << "Yes" << endl;
    for (int i = 1; i < N; ++i)
        cout << prev[i] + 1 << endl;
    return 0;
}
