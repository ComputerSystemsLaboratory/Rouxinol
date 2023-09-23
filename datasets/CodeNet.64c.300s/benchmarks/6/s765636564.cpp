#include <iostream>

int main()
{
    int array[120] = {};

    int n;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int b;
        int f;
        int r;
        int v;

        std::cin >> b;
        std::cin >> f;
        std::cin >> r;
        std::cin >> v;

        array[(b - 1) * 30 + (f - 1) * 10 + r - 1] += v;
    }


    for(int i = 0; i < 120; i++) {
        std::cout << " " << array[i];
        if (i % 10 == 9) {
            std::cout << std::endl;
        }

        if (i % 30 == 29 && i < 100) {
            std::cout << "####################" << std::endl;
        }



    }

    return 0;

}