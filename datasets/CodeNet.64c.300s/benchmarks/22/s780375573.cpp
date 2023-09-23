#include <iostream>

void rightTriangle(int, int, int);
int main()
{
    int N;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        int a, b, c;
        std::cin >> a >> b >> c;
        rightTriangle(a, b, c);
    }
    return 0;
}
void rightTriangle(int a, int b, int c)
{
    if (a * a + b * b == c * c
        || b * b + c * c == a * a
        || c * c + a * a == b * b) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}