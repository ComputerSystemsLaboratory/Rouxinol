#include <iostream>

int main()
{
    int side1, side2;
    std::cin >> side1 >> side2;

    int area = side1 * side2;
    int length = 2 * (side1 + side2);
    std::cout << area << " " << length << std::endl;

    return 0;
}