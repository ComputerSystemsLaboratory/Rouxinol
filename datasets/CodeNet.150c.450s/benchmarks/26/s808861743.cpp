#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    const char *comparator =
        ( a < b ) ? "<" :
        ( a > b ) ? ">" :
        "==";
    std::cout
        << "a "
        << comparator
        << " b"
        << std::endl;
    return 0;
}