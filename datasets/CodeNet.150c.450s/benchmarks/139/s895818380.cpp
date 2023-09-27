#include <bits/stdc++.h>

using namespace std;
#define DBG(x)                         \
    (void)(cout << "L" << __LINE__     \
                << ": " << #x << " = " \
                << (x) << '\n')
#define Lower_bound(v, x) distance(v.begin(), lower_bound(v.begin(), v.end(), x))
#define Upper_bound(v, x) distance(v.begin(), upper_bound(v.begin(), v.end(), x))
typedef long long ll;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
const long double PI = (acos(-1));
const long double EPS = 0.0000000001;
const int INF = 0x3f3f3f3f;
const int maxn = 110000;
int ans[maxn];
vector<int> G[maxn];
void bfs()
{
    queue<int> q;
    q.push(1);
    ans[1] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : G[u])
        {
            if (ans[v] == 0)
            {
                ans[v] = u;
                q.push(v);
            }
        }
    }
}
void run_case()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    bfs();
    for (int i = 2; i <= n; i++)
    {
        if (ans[i] == 0)
        {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
    for (int i = 2; i <= n; i++)
    {
        cout << ans[i] << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << setiosflags(ios::fixed) << setprecision(12);
    run_case();
    cout.flush();
    return 0;
}