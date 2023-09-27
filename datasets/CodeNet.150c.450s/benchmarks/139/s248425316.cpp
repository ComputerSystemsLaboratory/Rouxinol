#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int mxN = 2e5;
int n, m, ans[mxN];
vector<int> adj[mxN];

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    queue<int> q;
    q.push(0);
    memset(ans, -1, sizeof(ans));
    ans[0] = 0;

    while (q.size())
    {
        int x = q.front();
        q.pop();

        for (int u : adj[x])
        {
            if (ans[u] == -1)
            {
                ans[u] = x;
                q.push(u);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (ans[i] == -1)
        {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    for (int i = 1; i < n; i++)
    {
        cout << ans[i] + 1 << "\n";
    }
}