#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    bool result = (a < b) && (b < c);

    if (result) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }


    return 0;
}
