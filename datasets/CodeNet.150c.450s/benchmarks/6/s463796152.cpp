#include<iostream>
auto main ( ) -> int
{
    int a ;
    int b ;
    int c ;
    std::cin >> a >> b >> c ;
    std::cout << ( ( ( a < b ) && ( b < c ) ) ? "Yes" : "No" ) << std::endl ;
}