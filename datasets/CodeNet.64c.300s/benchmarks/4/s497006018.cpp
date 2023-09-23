#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    // input
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    // output
    if( a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100 )
    {
        std::cout << "Error : out of range!" << std::endl;
        return -1;
    }
    
    if( a < b && b < c )
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}
