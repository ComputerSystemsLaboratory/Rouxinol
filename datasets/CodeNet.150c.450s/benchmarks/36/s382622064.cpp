#include <cassert>
#include <iostream>

int f(int x)
{
    return x * x;
}
int main()
{
    while(true){
        int d;
        std::cin >> d;
        if(std::cin.eof()) break;
        
        int s = 0;
        for(int x = d; x < 600; x += d){
            s += d * f(x);
        }
        std::cout << s << std::endl;;
    }
    return 0;
}