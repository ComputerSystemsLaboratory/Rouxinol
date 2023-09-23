#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    while (std::cin >> n) {
        int cnt = 0;
        for (int i = 0; i < 10; ++i)
            for (int j = 0; j < 10; ++j)
                for (int k = 0; k < 10; ++k)
                    for (int l = 0; l < 10; ++l)
                        if (i + j + k + l == n)
                            ++cnt;
        std::cout << cnt << std::endl;
    }
}

