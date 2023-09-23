#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    int h, m, s;
    s = x % 60;
    x = x / 60;
    m = x % 60;
    x = x / 60;
    h = x;
    std::cout << h << ":" << m << ":" << s << "\n";
}