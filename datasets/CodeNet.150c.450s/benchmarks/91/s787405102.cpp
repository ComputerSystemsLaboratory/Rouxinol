#include <iostream>
#include <vector>

int main()
{
    std::vector<bool> is_prime(3);
    is_prime.at(0) = is_prime.at(1) = false;
    is_prime.at(2) = true;

    int n, n_max = 1;
    int cnt;
    while (std::cin >> n) {
        if (n_max < n) {
            is_prime.resize(n + 1, true);

            for (auto i = 2; i <= n / 2; i++) {
                if (is_prime.at(i) == true) {
                    for (auto j = 2 * i; j <= n; j += i) {
                        is_prime.at(j) = false;
                    }
                }
            }

            n_max = n;
        }

        cnt = 0;
        for (auto i = 2; i <= n; i++) {
            if (is_prime.at(i) == true) {
                cnt++;
            }
        }

        std::cout << cnt << std::endl;
    }

    return 0;
}