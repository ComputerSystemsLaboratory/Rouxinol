#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = int64_t;
using pint = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> table(n);
    rep(i, m)
    {
        int a, b;
        cin >> a >> b, --a, --b;
        table[a].emplace_back(b);
        table[b].emplace_back(a);
    }

    vector<int> ans(n, -1);
    queue<int> que;
    ans[0] = 0;
    que.push(0);
    while (!que.empty())
    {
        int v = que.front();
        que.pop();

        for (int nv : table[v])
        {
            if (ans[nv] == -1)
            {
                ans[nv] = v + 1;
                que.push(nv);
            }
        }
    }
    bool yes = true;
    rep(i, n) if (ans[i] == -1) yes = false;

    if (yes)
    {
        cout << "Yes" << endl;
        for (int i = 1; i < n; ++i)
            cout << ans[i] << endl;
    }
    else
        cout << "No" << endl;
}