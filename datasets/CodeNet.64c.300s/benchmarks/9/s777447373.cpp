#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int debt = 100000;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        debt += debt / 20;
        if (debt % 1000 != 0) {
            debt += 1000 - (debt % 1000);
        }
    }
    std::cout << debt << std::endl;
}

