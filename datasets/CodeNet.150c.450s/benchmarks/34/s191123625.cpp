#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    while (cin >> N, N)
    {
        int dp[30] = {0};

        dp[0] = 1; dp[1] = 1; dp[2] = 2;

        for(int i = 3; i <= N; i++)
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

        cout << 1 + dp[N] / 3650 << endl; 
    }
}
