#include <iostream>
#include <vector>
#include <cmath>

#define rep(a, b, c) for (int a = b; a < (c); a++)
#define repe(a, b, c) for (int a = b; a <= (c); a++)

using namespace std;

int main() {
    int N;
    cin >> N;

    vector< vector<long long unsigned> > dp(N, vector<long long unsigned>(21, 0));
    int num;
    cin >> num;
    dp[0][num] = 1;
    rep(i, 1, N) {
        cin >> num;
        repe(j, 0, 20) {
            if (j + num <= 20) dp[i][j + num] += dp[i - 1][j];
            if (j - num >= 0) dp[i][j - num] += dp[i - 1][j];
        }
    }
    cin >> num;
    cout << dp[N - 2][num] << endl;

    return 0;
}