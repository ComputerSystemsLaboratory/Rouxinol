#include <iostream>

int main()
{
    for ( int i = 0; true; ++i )
    {
        int x;
        std::cin >> x;

        if ( x == 0 ) { break; }

        std::cout
            << "Case " << (i+1) << ": " << x
            << std::endl;
    }

    return 0;
}