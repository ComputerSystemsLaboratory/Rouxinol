#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int dp[31] = {1, 1, 2};
    int n;

    for (int i = 3; i <= 30; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

    while (cin >> n, n) 
        cout << dp[n] / 10 / 365 + 1 << endl;

    return 0;
}