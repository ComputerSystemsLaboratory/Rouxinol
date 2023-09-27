#include <iostream>

int gcd(int x, int y)
{
    if(x < y){
        std::swap(x, y);
    }
    while(y > 0){
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}
int main()
{
    int x, y;
    std::cin >> x;
    std::cin >> y;
    std::cout << gcd(x, y) << std::endl;
    return 0;
}