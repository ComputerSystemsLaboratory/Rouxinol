#include <array>
#include <vector>
#include <deque>
#include <queue>
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

#define DBG
#undef DBG

constexpr int N_MAX = 100000;

int n, m;
vector<int> graph[N_MAX];
int color[N_MAX];

void dfs(int i, int c)
{
    color[i] = c;

    for(int j : graph[i]) {
        if(color[j]) continue;

        dfs(j, c);
    }
}

void solve()
{
    int c = 1;

    REP(i, n) {
        if(color[i]) continue;

        dfs(i, c);
        ++c;
    }
}

int main()
{
    cin >> n >> m;
#ifdef DBG
    cout << n << " " << m << "\n";
#endif

    REP(_, m) {
        int s, t;
        cin >> s >> t;
        graph[s].push_back(t);
        graph[t].push_back(s);
#ifdef DBG
        cout << s << " " << t << "\n";
#endif
    }

    solve();

    int q;
    cin >> q;
#ifdef DBG
    cout << q << "\n";
#endif

    REP(_, q) {
        int s, t;
        cin >> s >> t;
#ifdef DBG
        cout << s << " " << t << "\n";
#endif
        bool conn = color[s] == color[t];
        cout << (conn ? "yes" : "no") << "\n";
    }

    return 0;
}