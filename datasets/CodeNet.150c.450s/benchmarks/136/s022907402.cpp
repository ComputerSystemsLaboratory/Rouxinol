#include <iostream>
int Gcd(int a, int b) // Greatest Common Divisor
{
    if (!a || !b) {
        return 0;
    }
    while (a != b) {
        if (a < b) 
            std::swap(a, b);
        a -= b;
    }
    return a;
}
int Lcm(int a, int b, int gcd) // Least Common Multiple
{
    if (!a || !b) {
        return 0;
    }
    return a * (b / gcd); // 桁あふれ防止のために計算順序考慮
}
int main()
{
    int a, b, gcd;
    while (std::cin >> a >> b) {
        gcd = Gcd(a, b);
        std::cout << gcd << " " << Lcm(a, b, gcd) << "\n";
    }
}