// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_A
// Combinatorial - Coin Changing Problem
// status: []

#define SUBMIT

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cstring>

using namespace std;
using ui64 = unsigned long long;
using i64 = long long;

const int MAX_M = 20;
const int MAX_N = 50000;

int c[MAX_M];

// dp[i] i円支払うときの最小枚数
int dp[MAX_N + 1];
int n, m;

int main() {
#ifdef SUBMIT
    auto& stream = cin;
#else
    string program_input_str = R"(55 4
1 5 10 50
)";
    stringstream stream(program_input_str);
#endif
    memset(dp, 0, sizeof(dp));
    stream >> n >> m;
    for (int i = 0; i < m; ++i) {
        stream >> c[i];
    }

    iota(dp, dp + n + 1, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i + 1 >= c[j]) dp[i + 1] = min<int>({dp[i + 1 - c[j]] + 1, dp[i] + 1, dp[i + 1]});
            else dp[i + 1] = min(dp[i] + 1, dp[i + 1]);
        }
    }

    cout << dp[n] << endl;
    return 0;
}
