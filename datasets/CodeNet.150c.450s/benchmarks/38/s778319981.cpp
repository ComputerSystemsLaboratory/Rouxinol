#include <iostream>

void judgeTriangle(int, int, int);

int main()
{
    int number;
    std::cin >> number;
    for (int i = 0; i < number; ++i) {
        int a, b, c;
        std::cin >> a >> b >> c;
        judgeTriangle(a, b, c);
    }
    return 0;
}

void judgeTriangle(int a, int b, int c)
{
    if (a * a + b * b == c * c
        || b * b + c * c == a * a
        || c * c + a * a == b * b) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}