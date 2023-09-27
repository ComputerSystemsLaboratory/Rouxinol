#include <algorithm>
#include <iostream>
#include <cstdio>

template <typename T>
void read(T& x)
{
    char ch = getchar();
    for (; !isdigit(ch); ch = getchar());
    for (x = 0; isdigit(ch); x = x * 10 + (ch ^ 48), ch = getchar());
}

int main()
{
    int x = 0, cnt = 0;
    for (read(x); x; read(x))
        std::cout << "Case " << ++cnt << ": " << x << std::endl;
    return 0;
}
