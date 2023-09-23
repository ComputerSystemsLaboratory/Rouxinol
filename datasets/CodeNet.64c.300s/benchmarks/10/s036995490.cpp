#include <iostream>

int main()
{
    int x, y;
    int small, large;

    while (1){
        std::cin >> x >> y;

        if (x == 0 && y == 0) {
            break;
        }

        if (x <= y) {
            small = x;
            large = y;
        } else {
            small = y;
            large = x;
        }

        std::cout << small << " " << large << std::endl;
    }

    return 0;
}