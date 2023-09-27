#include <algorithm>
#include <cassert>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

#include <limits.h>

using namespace std;

typedef long long ll;

template<class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

const int INF = INT_MAX / 2;

vector<vector<int>> dp;

int solve(const int len1, const int len2, const string &s1, const string &s2) {
    for (int pos1 = 0; pos1 <= len1; pos1++) {
        for (int pos2 = 0; pos2 <= len2; pos2++) {
            char c1 = s1[pos1];
            char c2 = s2[pos2];
            if (pos1 != 0 && pos2 != 0 && c1 == c2) {
                chmin(dp[pos1][pos2], dp[pos1 - 1][pos2 - 1]);
            }
            if (pos1 - 1 >= 0) {
                chmin(dp[pos1][pos2], dp[pos1 - 1][pos2] + 1);
            }
            if (pos1 - 1 >= 0 && pos2 - 1 >= 0) {
                chmin(dp[pos1][pos2], dp[pos1 - 1][pos2 - 1] + 1);
            }
            if (pos2 - 1 >= 0) {
                chmin(dp[pos1][pos2], dp[pos1][pos2 - 1] + 1);
            }
        }
    }

    return dp[len1][len2];
}

int main(void) {
    string s1, s2;
    cin >> s1 >> s2;
    int len1 = (int) s1.size(), len2 = (int) s2.size();
    s1 = " " + s1;
    s2 = " " + s2;

    dp.resize(len1 + 1, vector<int>(len2 + 1, INF));
    dp[0][0] = 0;
    // for (int i = 0; i <= len1; i++) {
    //     dp[i][0] = 0;
    // }
    // for (int i = 0; i <= len2; i++) {
    //     dp[0][i] = 0;
    // }

    cout << solve(len1, len2, s1, s2) << endl;

    // for (int i = 0; i <= len1; i++) {
    //     for (int j = 0; j <= len2; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}

