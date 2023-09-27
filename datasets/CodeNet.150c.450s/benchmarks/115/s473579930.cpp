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

constexpr int N = 1000;

int dp[N+1][N+1];

int solve(const string& x, const string& y)
{
    int m = x.size();
    int n = y.size();

    FOR(i, 0, m+1)
        dp[i][0] = 0;
    FOR(j, 0, n+1)
        dp[0][j] = 0;

    FOR(i, 1, m+1) {
        FOR(j, 1, n+1) {
            if(x[i-1] == y[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    return dp[m][n];
}

int main()
{
    int n;
    cin >> n;

    REP(_, n) {
        string x, y;
        cin >> x;
        cin >> y;

        int lcs_len = solve(x, y);
        cout << lcs_len << "\n";
    }

    return 0;
}