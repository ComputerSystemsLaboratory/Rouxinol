#include <iostream>

int main( void )
{
    int a, b;
    std::cin >> a >> b;
    std::cout << "a" << ( a < b ? " < " : ( a > b ? " > " : " == " ) ) << "b" << std::endl;
    return 0;
}