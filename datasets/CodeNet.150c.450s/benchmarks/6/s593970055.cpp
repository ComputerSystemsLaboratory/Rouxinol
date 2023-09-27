#include <iostream>

int main( void )
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if ( ( a < b ) && ( b < c ) )
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}