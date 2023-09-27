#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;
const int MOD = 1000000007;

template <typename T>
void print(const T &v);

vector<int> dist(105, INF);
vector<int> grid[105];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++)
        {
            int v;
            cin >> v;
            grid[u].push_back(v);
        }
    }
    queue<int> qe;
    qe.push(1);
    dist[1] = 0;

    while (!qe.empty())
    {
        int now = qe.front();
        qe.pop();
        for (int next : grid[now])
        {
            if (dist[next] <= dist[now] + 1)
            {
                continue;
            }
            if (dist[next] != INF)
            {
                dist[next] = dist[now] + 1;
                continue;
            }
            else
            {
                dist[next] = dist[now] + 1;
            }
            qe.push(next);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (dist[i] != INF)
        {
            cout << i << ' ' << dist[i] << endl;
        }
        else
        {
            cout << i << ' ' << -1 << endl;
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
