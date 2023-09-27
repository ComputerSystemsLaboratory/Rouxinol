#include <iostream>
#include <vector>
#include <cmath>

#define rep(a, b, c) for (int a = b; a < c; a++)

using namespace std;

int main() {
    while (true) {
        int N;
        cin >> N;

        if (N == 0) break;

        N++;
        long long dp[N];
        dp[0] = 1;

        rep(i, 1, N) {
            dp[i] = dp[i - 1];
            if (i > 1) dp[i] += dp[i - 2];
            if (i > 2) dp[i] += dp[i - 3];
        }
        cout << ceil(ceil(dp[N - 1] / 10.0) / 365.0) << endl;
    }
    return 0;
}