#include <array>
#include <vector>
#include <deque>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <numeric>
#include <functional>
#include <iterator>
#include <tuple>
#include <utility>
#include <limits>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cstdint>
#include <cassert>

using namespace std;

#define FOR(i, start, end) for(int i = (start); i < (end); ++i)
#define REP(i, n) FOR(i, 0, n)

int n;
int mat[100][100];
int d[100];
int f[100];

int dfs(int i, int t)
{
    d[i] = t++;

    REP(j, n) {
        if(mat[i][j] && !d[j]) {
            t = dfs(j, t);
        }
    }

    f[i] = t++;

    return t;
}

void solve()
{
    int t = 1;

    REP(i, n) {
        if(d[i]) continue;

        t = dfs(i, t);
    }
}

int main()
{
    cin >> n;

    REP(i, n) {
        REP(j, n) {
            mat[i][j] = 0;
        }
    }

    REP(_, n) {
        int u, k;
        cin >> u >> k;

        REP(_, k) {
            int v;
            cin >> v;
            mat[u-1][v-1] = 1;
        }
    }

    fill(begin(d), end(d), 0);
    fill(begin(f), end(f), 0);
    solve();

    REP(i, n) {
        cout << i+1 << " " << d[i] << " " << f[i] << "\n";
    }

    return 0;
}