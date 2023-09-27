#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> rs(n + 1);
    for (int i = 0; i < n; i++) {
        int r, c;
        cin >> r >> c;
        rs[i] = r;
        rs[i + 1] = c;
    }

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 1 << 25));
    for (int i = 0; i <= n; i++) {
        dp[i][i] = 0;
    }

    for (int j = 1; j < n; j++) {
        for (int i = 0; i <= n - j; i++) {
            for (int k = i + 1; k <= i + j; k++) {
                dp[i][i + j] = min(dp[i][i + j], dp[i][k - 1] + dp[k][i + j] + rs[i] * rs[k] * rs[i + j + 1]);
            }
        }
    }
    cout << dp[0][n - 1] << endl;
}