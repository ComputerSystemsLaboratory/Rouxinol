/*
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

int main()
{
    int N, W;
    std::cin >> N >> W;
    std::vector<int> v(N), w(N);
    for (int i = 0; i < N; i++)
        std::cin >> v[i] >> w[i];

    int dp[110][10010];

    for (int i = 0; i < N; i++)
    {
        dp[i][0] = 0;
        for (int j = 0; j <= W; j++)
        {
            if (w[i] > j)
                dp[i + 1][j] = dp[i][j];
            else
                dp[i + 1][j] = std::max(dp[i][j], dp[i][j - w[i]] + v[i]);
        }
    }

    std::cout << dp[N][W] << std::endl;

    return 0;
}
