#include <iostream>


int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            std::cout << " " << i;
            continue;
        } else if (i % 10 == 3) {
            std::cout << " " << i;
            continue;
        }

        int a = i / 10;
        if (a % 10 == 3) {
            std::cout << " " << i;
            continue;
        }

        int b = a / 10;
        if (b % 10 == 3) {
            std::cout << " " << i;
            continue;
        }

        int c = b / 10;
        if (c % 10 == 3) {
            std::cout << " " << i;
            continue;

        }



    }

    std::cout << std::endl;

    return 0;
}