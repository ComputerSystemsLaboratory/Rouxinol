#include <iostream>
typedef unsigned long long ULL;
ULL factorial(ULL n)
{
    if (n == 0) {
        return 1;
    } 
    else {
        return n * factorial(n-1);
    }
}
int main()
{
    ULL n;
    std::cin  >> n;
    std::cout << factorial(n) << std::endl;
}