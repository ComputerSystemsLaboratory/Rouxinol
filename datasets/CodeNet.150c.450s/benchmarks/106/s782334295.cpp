#include <algorithm>
#include <iostream>
#include <cstdio>

int main()
{
    int a = 0, b = 0, c = 0, cnt = 0;
    std::cin >> a >> b >> c;
    for (int i = a; i <= b; ++i)
        if (c % i == 0)
            ++cnt;
    std::cout << cnt << std::endl;
    return 0;
}
