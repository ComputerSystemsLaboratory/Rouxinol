#include <iostream>

int main()
{
    long small, large;
    std::cin >> small >> large;

    if (small > large) {
        long tmp = small;
        small = large;
        large = tmp;
    }

    long mod;
    while ((mod = large % small) != 0) {
        large = small;
        small = mod;
    }

    std::cout << small << std::endl;

    return 0;
}