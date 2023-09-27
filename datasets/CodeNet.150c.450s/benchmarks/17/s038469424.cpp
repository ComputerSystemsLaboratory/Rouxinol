#include <iostream>
#include <algorithm>

int main()
{
    int a[5];
    for (int i = 0; i < 5; ++i) std::cin >> a[i];
    std::sort(a, a + 5, std::greater<int>());
    std::cout << a[0];
    for (int i = 1; i < 5; ++i) std::cout << " " << a[i];
    std::cout << std::endl;
}