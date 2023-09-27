#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int e, dp[1000001];
    for (int i = 0; i < 1000001; i++) {
        dp[i] = i;
    }

    for (int i = 0; i < 101; i++) {
        dp[i * i * i] = min(i, dp[i * i * i]);
        for (int j = 0; i * i * i + j * j < 1000001 && j < 1001; j++) {
            dp[j * j] = min(j, dp[j * j]);
            dp[i * i * i + j * j] = min(i + j, dp[i * i * i + j * j]);
        }
    }

    for (int i = 1; i < 1000001; i++) {
        dp[i] = min(dp[i-1] + 1, dp[i]);
    }

    while (cin >> e, e) {
        cout << dp[e] << endl;
    }

    return 0;
}