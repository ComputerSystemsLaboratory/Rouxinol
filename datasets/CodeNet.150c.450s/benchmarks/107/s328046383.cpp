#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

const int MAX_N = 1010;
const int INF = INT_MAX;
int dp[MAX_N][MAX_N];

int main(void) {
    string s1, s2; cin >> s1 >> s2;
    fill_n((int *)dp, MAX_N*MAX_N, INF);

    for (int i = 0; i <= s1.size(); i++) {
        dp[0][i] = i;
    }
    for (int i = 0; i <= s2.size(); i++) {
        dp[i][0] = i;
    }

    for (int i = 1; i <= s2.size(); i++) {
        for (int j = 1; j <= s1.size(); j++) {
            if (s2[i-1] == s1[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = min(min(dp[i-1][j-1], dp[i-1][j]), dp[i][j-1]) + 1;
            }
        }
    }

    cout << dp[s2.size()][s1.size()] << endl;

    // for (int i = 0; i <= s2.size(); i++) {
    //     for (int j = 0; j <= s1.size(); j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}