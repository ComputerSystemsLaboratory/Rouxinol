#include <iostream>

int main(void)
{
    int debt = 100000;

    int n;
    std::cin >> n;

    for(int i = 0; i < n; ++i)
    {
        debt *= 1.05;
        debt += (debt % 1000 != 0 ? 1000 - debt % 1000 : 0);
    }

    std::cout << debt << std::endl;
    return 0;
}