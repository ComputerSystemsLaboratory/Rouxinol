#include <iostream>

int main()
{
    int x = 0, h = 0, m = 0, s = 0;
    std::cin >> x;
    s = x % 60;
    m = x / 60 % 60;
    h = x / 3600;
    std::cout << h << ":" << m << ":" << s << std::endl;
    return 0;
}
