#include <iostream>
#include <vector>
#include <numeric>
#include <utility>
#include <cmath>
#include <algorithm>

using ll = long long;

template <class T>
using vec = std::vector<T>;

template <class T>
constexpr T nil = static_cast<T>(-1);

template <class T>
constexpr T inf = std::numeric_limits<T>::max() / 2;

constexpr ll INF = inf<ll>;

//ワーシャルフロイド法はO(log(|V|^3))
void solve()
{
    using namespace std;

    int n, m;
    cin >> n >> m;

    vec<vec<ll>> dist(n, vec<ll>(n, INF));
    
    for (int i = 0; i < n; ++i)
        dist[i][i] = 0;

    for (int i = 0, begin, end, d; i < m; ++i)
    {
        cin >> begin >> end >> d;
        dist[begin][end] = d;
    }

    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
        {
            if (dist[i][k] == INF) continue;
            for (int j = 0; j < n; ++j)
            {
                if (dist[k][j] == INF) continue;
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }

    bool negative = false;
    for (int i = 0; i < n && !negative; ++i)
        if (dist[i][i] < 0)
            negative = true;
    
    if (negative)
        cout << "NEGATIVE CYCLE" << endl;
    else
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
            {
                if (dist[i][j] == INF)
                    cout << "INF";
                else
                    cout << dist[i][j];

                cout << (j + 1 != n ? " " : "\n");
            }
}

int main()
{
    solve();
    return 0;
}
