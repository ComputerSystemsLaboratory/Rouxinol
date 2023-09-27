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

using P = pair<s64, s64>;

s64 prim(vector<vector<P>>& g, s64 s)
{
    int n = g.size();
    static const s64 inf = 1e18;
    vs64 cost(n, inf);
    cost[s] = 0;

    priority_queue<P, vector<P>, greater<P>> pq;
    pq.push(P{cost[s], s});
    s64 ret = 0;
    vector< bool > used(n, false);
    while (!pq.empty())
    {
        auto p = pq.top(); pq.pop();
        int from = p.second;
        if (used[from]) continue;
        ret += p.first;
        used[from] = true;

        for (auto x : g[from])
        {
            int to = x.first;
            s64 c = x.second;
            if (cost[to] > c)
            {
                cost[to] = c;
                pq.push(P{cost[to], to});
            }
        }
    }

    return ret;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<vector<P>> g(n);
    rep (i, m)
    {
        s64 u, v, c;
        cin >> u >> v >> c;
        g[u].emplace_back(v, c);
        g[v].emplace_back(u, c);
    }

    cout << prim(g, 0) << "\n";

    return 0;
}

