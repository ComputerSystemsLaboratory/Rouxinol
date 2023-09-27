#include <algorithm>
#include <cassert>
#include <cmath>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FOREQ(i, a, b) for (int i = (a); i <= (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define REPEQ(i, n) FOREQ(i, 0, n)
#define ALL(c) (c).begin(), (c).end()

template <typename T> inline int size(const T& x) { return x.size(); }

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);

    int m, n_min, n_max;
    while (cin >> m >> n_min >> n_max, m | n_min | n_max) {

        vector<int> P(m);
        REP(i, m) cin >> P[i];

        int max_gap = 0, ans = -1;
        FOR(i, n_min-1, n_max) {
            int gap = P[i] - P[i+1];
            if (gap >= max_gap) {
                max_gap = gap;
                ans = i+1;
            }
        }

        cout << ans << endl;
    }
}