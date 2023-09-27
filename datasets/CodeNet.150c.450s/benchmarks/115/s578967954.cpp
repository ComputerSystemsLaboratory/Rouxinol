#include <iostream>
#include <vector>
using namespace std;

int main () {
    int N;
    cin >> N;
    vector<string> S(N), T(N);
    for (int i = 0; i < N; i++)
        cin >> S[i] >> T[i];

    for (int i = 0; i < N; i++) {
        int dp[1001][1001] = {};
        string s = S[i], t = T[i];
        int n = s.size(), m = t.size();
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                if (s[j] == t[k]) {
                    dp[j + 1][k + 1] = dp[j][k] + 1;
                } else {
                    dp[j + 1][k + 1] = max(dp[j + 1][k], dp[j][k + 1]);
                }
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}

