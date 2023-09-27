#include <iostream>

int Area( int height, int width )
{
    return height * width;
}

int Circumference( int height, int width )
{
    return ( height + width ) * 2;
}

int main()
{
    int height, width;
    std::cin >> height >> width;

    std::cout
        << Area( height, width ) << " "
        << Circumference( height, width )
        << std::endl;
    return 0;
}