#include <iostream>
#include <cstdio>

int main()
{
    int t;
    std::cin >> t;
    int h = t / 3600;
    int m = (t % 3600) / 60;
    int s = t % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}