#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    char mark;
    int num;

    int array[52] = {};






    for (int i = 0; i < n; i++) {
        std::cin >> mark;
        std::cin >> num;

        if (mark == 'S') {
            num -= 1;
        } else if (mark == 'H') {
            num += 12;
        } else if (mark == 'C') {
            num += 25;
        } else if (mark == 'D') {
            num += 38;
        } else {
            std::cout << "S, H, C, D for mark" << std::endl;
        }

        array[num] = 1;
    }

    for (int i = 0; i < 52; i++) {
        if (array[i] != 1) {
            if (i < 13) {
                std::cout << "S " << i+1 << std::endl;
            } else if (i < 26) {
                std::cout << "H " << i-12 << std::endl;
            } else if (i < 39) {
                std::cout << "C " << i-25 << std::endl;
            } else {
                std::cout << "D " << i-38 << std::endl;
            }
        }
    }

    return 0;
}