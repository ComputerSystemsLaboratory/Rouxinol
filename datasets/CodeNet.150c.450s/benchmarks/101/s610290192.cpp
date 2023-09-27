#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < (ll)n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = 1 << 21;
const ll MOD = 1e9 + 7;

static const int N = 1e5;
static const int NIL = -1;

int n, m, q;
vector<int> G[N];
int color[N];

void dfs(int r, int c)
{
    stack<int> S;
    S.push(r);
    color[r] = c;
    while(!S.empty()) {
        int u = S.top();
        S.pop();
        rep(i, G[u].size()) {
            int v = G[u][i];
            if (color[v] == NIL) {
                color[v] = c;
                S.push(v);
            }
        }
    }
}

void assigncolor()
{
    int id = 1; // 同じidがcolorに格納されているときは同じ連結成分にある
    // 初期化
    rep(i, n) {
        color[i] = NIL;
    }
    rep(u, n) {
        if (color[u] == NIL) { // 初期化されていた場合
            dfs(u, id++);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    rep(i, m)
    {
        int s, t;
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    assigncolor();

    cin >> q;
    rep(i, q)
    {
        int s, t;
        cin >> s >> t;
        if (color[s] == color[t]) {
            puts("yes");
        } else {
            puts("no");
        }
    }
    return 0;
}
