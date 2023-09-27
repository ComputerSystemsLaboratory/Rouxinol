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

int n;
int mat[100][100];
int d[100];

void solve()
{
    fill(begin(d), end(d), -1);

    queue<int> q;
    q.push(0);
    d[0] = 0;

    while(!q.empty()) {
        int i = q.front(); q.pop();
        REP(j, n) {
            if(!mat[i][j]) continue;
            if(d[j] != -1) continue;

            d[j] = d[i] + 1;
            q.push(j);
        }
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

    solve();

    REP(i, n) {
        cout << i+1 << " " << d[i] << "\n";
    }

    return 0;
}