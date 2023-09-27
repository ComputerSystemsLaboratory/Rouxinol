#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;
const int MOD = 1000000007;

template <typename T>
void print(const T &v);

const int V = 100005;
vector<P> G[V]; // pair<辺の距離, 行き先の頂点> (隣接リスト)
ll dist[V];     // dist[i]はsから頂点iへの最短距離が入る
bool used[V];
void dijkstra(ll s)
{ // s: 始点
    fill_n(dist, V, INT_MAX);
    fill_n(used, V, false);
    priority_queue<P, vector<P>, greater<P>> q; // 値が小さい順に取り出されるpriority_queue
    q.push(P(0, s));
    while (!q.empty())
    {
        ll d, t; // d: sからの距離 t: 行き先
        tie(d, t) = q.top();
        q.pop();
        if (used[t])
            continue; // 既に探索済か
        used[t] = true;
        dist[t] = d;
        for (P e : G[t])
        {
            if (dist[e.second] <= d + e.first)
                continue;
            q.push(P(d + e.first, e.second));
        }
    }
}

int main()
{
    int v, e, r;
    cin >> v >> e >> r;
    for (int i = 0; i < e; i++)
    {
        int s, t, d;
        cin >> s >> t >> d;
        G[s].push_back(make_pair(d, t));
    }
    dijkstra(r);
    for (int i = 0; i < v; i++)
    {
        if (dist[i] == INT_MAX)
        {
            cout << "INF" << endl;
        }
        else
        {
            cout << dist[i] << endl;
        }
    }
    return 0;
}

// Use For Debug
template <typename T>
void print(T const &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (i)
            cout << ' ';
        cout << v[i];
    }
    cout << endl;
}
