#include <iostream>

bool Contains(
    int width, int height,
    int x, int y, int radius
)
{
    if ( x < radius ) return false;
    if ( y < radius ) return false;
    if ( x + radius > width ) return false;
    if ( y + radius > height ) return false;
    return true;
}

int main()
{
    int width, height, x, y, radius;
    std::cin >> width >> height >> x >> y >> radius;

    const bool contains = Contains( width, height, x, y, radius );
    std::cout
        << ( contains ? "Yes" : "No" )
        << std::endl;
    return 0;
}