#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;
const int MOD = 1000000007;

template <typename T>
void print(const T &v);

vector<int> grid[105];
vector<bool> seen(105, false);
P ans[105];
int t = 0;

void dps(int now)
{
    seen[now] = true;
    ++t;
    ans[now].first = t;
    for (int next : grid[now])
    {
        if (seen[next])
        {
            continue;
        }
        dps(next);
    }
    ++t;
    ans[now].second = t;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
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
    for (int i = 1; i < n; i++)
    {
        if (!seen[i])
        {
            dps(i);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << ' ' << ans[i].first << ' ' << ans[i].second << endl;
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
