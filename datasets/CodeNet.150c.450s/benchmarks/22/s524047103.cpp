#include <bits/stdc++.h>
using namespace std;
using Long = long long;

template <typename W>
using Edge = pair<int, W>;

template <typename W>
using WeightedGraph = vector<vector<Edge<W>>>;

// 時間計算量 ; O(VE)
template <typename W>
tuple<vector<W>, bool> bellman_ford(int s, int V_size, WeightedGraph<W> &G)
{
    // true -> 負の閉路なし, false -> 負の閉路あり
    // s : 始点, G : 隣接リスト G[v1][v2] : (頂点, 重み)
    const W INF = numeric_limits<W>::max();
    // 初期化
    vector<W> d(V_size, INF);
    d[s] = 0;
    bool update = true;

    for (int k = 0; update && k < V_size; k++)
    {
        update = false;
        for (int i = 0; i < (int)G.size(); i++)
        {
            for (auto &&p : G[i])
            {
                if (d[i] != INF && d[p.first] > d[i] + p.second)
                {
                    d[p.first] = d[i] + p.second;
                    update = true;
                    if (k == (V_size - 1))
                        return forward_as_tuple(d, false);
                }
            }
        }
    }
    return forward_as_tuple(d, true);
}

int main(void)
{
    int V, E, r;
    int s, t, d;
    cin >> V >> E >> r;
    WeightedGraph<int> G(V);
    for (int i = 0; i < E; i++)
    {
        cin >> s >> t >> d;
        G[s].emplace_back(t, d);
    }

    vector<int> D;
    bool flg;
    tie(D, flg) = bellman_ford(r, V, G);
    if (!flg)
    {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    for (int i = 0; i < V; i++)
    {
        if (D[i] == numeric_limits<int>::max())
        {
            cout << "INF" << endl;
        }
        else
        {
            cout << D[i] << endl;
        }
    }
}
