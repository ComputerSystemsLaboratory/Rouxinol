#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int tmp;
    if (a > b){
        tmp = a;
        a = b;
        b = tmp;
    }
    if (b > c){
        tmp = b;
        b = c;
        c = tmp;
    }
    if (a > b){
        tmp = a;
        a = b;
        b = tmp;
    }

    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}