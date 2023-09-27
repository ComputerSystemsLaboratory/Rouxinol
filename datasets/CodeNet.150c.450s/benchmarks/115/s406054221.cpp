#include <iostream>
using namespace std;

#define MAX_Q 150
#define MAX_LEN 1000
string s, t;
int dp[MAX_LEN+1][MAX_LEN+1];

int align_dp() {
    fill((int*)dp, (int*)(dp+MAX_LEN+1), 0);
    // dp[i][j] := i-1番目、j-1番目までの文字で最長
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < t.size(); j++) {
            if (s[i] == t[j]) {
                dp[i+1][j+1] = max(dp[i][j] + 1, max(dp[i+1][j], dp[i][j+1]));
            } else {
                dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }
    return dp[s.size()][t.size()];
}

int main() {
    int q;
    cin >> q;
    int res[MAX_Q+1];
    for (int i = 0; i < q; i++) {
        cin >> s;
        cin >> t;
        res[i] = align_dp();
    }
    for (int i = 0; i < q; i++)
        cout << res[i] << endl;
    return 0;
}

