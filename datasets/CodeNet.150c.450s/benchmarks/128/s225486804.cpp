#include <iostream>
#include <string>

auto main () -> int
{
    std::string s;
    std::getline (std::cin , s);
    for (auto ite = s.rbegin (); ite != s.rend (); ++ ite)
    {
        std::cout << * ite;
    }
    std::cout << std::endl;
}