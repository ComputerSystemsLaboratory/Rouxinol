#include <algorithm>
#include <iostream>
#include <vector>

#include <string.h>
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

const int MAX_S = 1000;

int dp[MAX_S + 1][MAX_S + 1];

int solve(const char *s1, const int l1, const char *s2, const int l2) {
    for (int i = 0; i <= l1; i++) {
        dp[i][0] = i;
        for (int j = 1; j <= l2; j++) {
            if (i == 0) {
                dp[i][j] = j;
                continue;
            }
            if (s1[i - 1] == s2[j - 1]) {
                chmin(dp[i][j], dp[i - 1][j - 1]);
            } else {
                chmin(dp[i][j], dp[i - 1][j - 1] + 1);
            }
            chmin(dp[i][j], dp[i - 1][j] + 1);
            chmin(dp[i][j], dp[i][j - 1] + 1);
        }
    }
    return dp[l1][l2];
}

int main(void) {
    char s1[MAX_S + 10], s2[MAX_S + 10];
    int len_s1, len_s2;
    cin >> s1 >> s2;
    len_s1 = strlen(s1);
    len_s2 = strlen(s2);
    reverse(s1, s1 + len_s1);
    reverse(s2, s2 + len_s2);

    for (int i = 0; i < MAX_S + 1; i++) {
        for (int j = 0; j < MAX_S + 1; j++) {
            dp[i][j] = INT_MAX / 2;
        }
    }

    if (len_s1 < len_s2) {
        cout << solve(s1, len_s1, s2, len_s2) << endl;
    } else {
        cout << solve(s2, len_s2, s1, len_s1) << endl;
    }
    
    return 0;
}

