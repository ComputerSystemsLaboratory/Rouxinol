#include <iostream>

int f(int x);

int main()
{
    int delta;
    while (std::cin >> delta) {
        int ans = 0;
        for (auto i = delta; i < 600; i += delta) {
            ans += delta * f(i);
        }
        std::cout << ans << std::endl;
    }

    return 0;
}

int f(int x)
{
    return (x * x);
}