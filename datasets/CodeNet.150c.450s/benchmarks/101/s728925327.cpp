#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) REP(i, 0, n)
#define ALL(v) v.begin(), v.end()
#define MSG(a) cout << #a << " " << a << endl;
#define REP(i, x, n) for (int i = x; i < n; i++)
#define OP(m) cout << m << endl
typedef long long ll;
typedef unsigned long long ull;

vector<int> g[100000];

int con[100000] = {};

void dfs(int u, int id)
{
    con[u] = id;

    rep(i, g[u].size())
    {
        if (con[g[u][i]] == 0)
            dfs(g[u][i], id);
    }
}

int main()
{
    int n, m, s, t;
    cin >> n >> m;

    rep(i, m)
    {
        cin >> s >> t;
        g[s].push_back(t);
        g[t].push_back(s);
    }
    int id = 1;
    rep(i, n)
    {
        if (con[i] == 0)
            dfs(i, id++);
    }

    int q;
    cin >> q;
    rep(i, q)
    {
        cin >> s >> t;
        con[s] == con[t] ? OP("yes") : OP("no");
    }

    return 0;
}
