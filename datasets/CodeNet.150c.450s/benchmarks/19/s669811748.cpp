#include <iostream>
#include <algorithm>

int main()
{
    while ( true )
    {
        int x, y;
        std::cin >> x >> y;

        if ( x == 0 && y == 0 ) { break; }

        if ( x > y ) { std::swap( x, y ); }
        std::cout
            << x << " " << y
            << std::endl;
    }

    return 0;
}