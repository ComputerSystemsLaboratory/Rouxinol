#include <iostream>

int main()
{
    int a, b, c;
    int ans = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    while (a <= b) {
        if (c % a == 0) {
            ans++;
        }
        a++;
    }
    std::cout << ans << std::endl;
    return 0;
}