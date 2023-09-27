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



int main()
{
    int n;
    cin >> n;

    int mat[100][100];
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

    REP(i, n) {
        REP(j, n) {
            cout << mat[i][j];
            cout << (j == n-1 ? '\n' : ' ');
        }
    }

    return 0;
}