#include <iostream>
#include <iomanip>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <cstdio>
#include <utility>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <numeric>

using namespace std;

typedef uint64_t u64;
typedef int64_t s64;
typedef uint32_t u32;
typedef int32_t s32;
typedef vector<s32> vs32;
typedef vector<u32> vu32;
typedef vector<s64> vs64;
typedef vector<u64> vu64;

const double PI=3.14159265358979323846;

#define MAX(x, y) ((x) < (y) ? (y) : (x))
#define MIN(x, y) ((x) > (y) ? (y) : (x))

#define rep(i, N) for(int i = 0; i < N; ++i)

#define CEIL(x, y) (((x) + (y) - 1) / (y))
#define MOD 1000000007ULL

#define IN(l, r, x) ((l) <= (x) && (x) < (r))

using P = pair<int, int>;

void dfs(vector< vs32 >& g, int from, vector< bool >& reached)
{
    reached[from] = true;
    for (auto to : g[from])
    {
        if (!reached[to]) dfs(g, to, reached);
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, s;
    cin >> n >> m >> s;

    vector< pair<int, P> > e;
    vector< vs32 > g(n);

    rep (i, m)
    {
        int u, v, c;
        cin >> u >> v >> c;
        e.emplace_back(c, P{u, v});
        g[u].push_back(v);
    }

    vector<bool> reached(n, false);
    dfs(g, s, reached);

    static const int inf = 1e9;
    vs32 d(n, inf);
    d[s] = 0;
    rep (i, n)
    {
        bool update = false;
        rep (j, m)
        {
            int c = e[j].first;
            int from = e[j].second.first;
            int to = e[j].second.second;
            if (reached[to] && d[to] > d[from] + c)
            {
                d[to] = d[from] + c;
                update = true;
            }
        }
        if (i == n - 1 && update)
        {
            cout << "NEGATIVE CYCLE\n";
            return 0;
        }
    }

    rep (i, n)
    {
        if (!reached[i]) cout << "INF\n";
        else cout << d[i] << "\n";
    }

    return 0;
}


