#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

int main()
{
    int n, x;
    while (true) {
        std::cin >> n >> x;
        if (n == 0 && x == 0) {
            break;
        }

        int ret = 0;
        for (int i = 1; i <= n - 2; ++i) {
            for (int j = i + 1; j <= n - 1; ++j) {
                for (int k = j + 1; k <= n; ++k) {
                    if ((i + j + k) == x) {
                        ++ret;
                    }
                }
            }
        }
        std::cout << ret << std::endl;
    }

    return 0;
}
