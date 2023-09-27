#include <iostream>
#include <vector>
#include <array>

int main(void) {
    u_int N;
    std::array<std::array<unsigned long long, 21>, 100> dp = {{}};
    std::vector<u_int> seq;

    std::cin >> N;
    seq.reserve(N);
    for (u_int i = 0; i < N; ++i) {
        u_int tmp;
        std::cin >> tmp;
        seq.push_back(std::move(tmp));
    }

    dp[0][seq[0]] = 1;
    for (u_int i = 1; i < N - 1; ++i) {
        for (u_int j = 0; j < 21; ++j) {
            if (dp[i - 1][j] > 0) {
                if (j + seq[i] <= 20) {
                    dp[i][j + seq[i]] += dp[i - 1][j];
                }
                if (j >= seq[i]) {
                    dp[i][j - seq[i]] += dp[i  -1][j];
                }
            }
        }
    }
    std::cout << dp[N - 2][seq[N - 1]] << std::endl;

    return 0;
}