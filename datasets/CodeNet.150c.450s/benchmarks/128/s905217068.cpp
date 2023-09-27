#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    char str[21];
    std::cin >> str;

    int cnt = 0;
    while (str[++cnt]);

    while (cnt-- > 0)
        std::cout << str[cnt];
    std::cout << std::endl;
}

