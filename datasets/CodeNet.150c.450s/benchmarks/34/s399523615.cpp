#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dp[31];

int main() {
    dp[0] = 1;
    for (int i=1; i<31; ++i) {
        int sum = 0;
        for (int j=i-1; j>=i-3 && j>=0; --j) {
            sum += dp[j];
        }
        dp[i] = sum;
    }
    int n;
    while (cin >> n, n) {
        if (dp[n] % 3650 == 0) {
            cout << dp[n] / 3650 << endl;
        } else {
            cout << dp[n] / 3650 + 1 << endl;
        }
    }
    return 0;
}