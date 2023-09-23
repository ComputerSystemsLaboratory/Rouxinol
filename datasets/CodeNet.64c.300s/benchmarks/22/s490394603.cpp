#include <iostream>


bool judging(int x, int y, int z)  //widthes of three edges
{
    if (x * x + y * y == z * z) {
        return true;
    } else if (z * z + x * x == y * y) {
        return true;
    } else if (y * y + z * z == x * x) {
        return true;
    } else {
        return false;
    }
}


int main()
{
    int a, b, c, n;  //the number of lines
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a >> b >> c;
        if (judging(a, b, c)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
}