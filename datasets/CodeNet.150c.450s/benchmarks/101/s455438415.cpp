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

class Graph
{
public:
    Graph() {}
    Graph(int n)
    : con(vs32(n, -1))
    {}
    ~Graph() {}

    bool path(int u, int v)
    {
        bool ret;

        int repu = getRep(u);
        int repv = getRep(v);
        if (repu != repv) ret = false;
        else /*if (repu == repv)*/ ret = true;

        return ret;
    }

    void setPath(int u, int v)
    {
        int repu = getRep(u);
        int repv = getRep(v);


        if (repu == repv) return;
        if (con[repu] > con[repv])
        {
            swap(repu, repv);
        }
        con[repu] += con[repv];
        con[repv] = repu;
    }

    int getRep(int u)
    {
        int ret;
        if (con[u] >= 0)
        {
            con[u] = getRep(con[u]);
            ret = con[u];
        }
        else
        {
            ret = u;
        }
        return ret;
    }

    vs32 con;
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    Graph g(n);
    int m;
    cin >> m;
    int u, v;
    rep (i, m)
    {
        cin >> u >> v;
        g.setPath(u, v);
    }

    int q;
    cin >> q;
    rep (i, q)
    {
        cin >> u >> v;
        if (g.path(u, v))
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}

