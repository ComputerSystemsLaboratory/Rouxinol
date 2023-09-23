#include <iostream>

int main()
{
    int a[100] = {}, n, m = 0;
    while (std::cin >> n) {
        ++a[n - 1];
        if (m < a[n - 1]) m = a[n - 1];
    }
    for (int i = 0; i < 100; ++i)
        if (a[i] == m) std::cout << i + 1 << std::endl;
}