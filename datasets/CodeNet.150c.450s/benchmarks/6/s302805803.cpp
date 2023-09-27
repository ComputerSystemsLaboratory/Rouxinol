#include <iostream>

int main(void)
{
    int a,b,c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if (a<b && b<c) {
        std::cout<<"Yes\n";
    }else{
        std::cout<<"No\n";
    }
    return 0;
}