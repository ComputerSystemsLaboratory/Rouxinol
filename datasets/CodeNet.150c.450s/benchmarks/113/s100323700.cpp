#include <iostream>

int main()
{
    int i = 1;

    while (1)
    {
        int a;
        std::cin >> a;


        if (std::cin.eof()) {
            break;
        }

        if (a != 0) {
            std::cout << "Case " << i << ": " << a << std::endl;

            i += 1;
        }
    }
    return 0;
}