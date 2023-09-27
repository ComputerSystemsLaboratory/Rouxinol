#include <utility>
#include <iostream>
#include <cmath>
#include <cstdio>

// ax + by = e1
// cx + dy = e2
auto solve (double a , double b , double e1 , double c , double d , double e2) -> std::pair <double , double>
{
    auto delta = a * d - b * c;
    return std::make_pair ((d * e1 - b * e2) / delta , (a * e2 - c * e1) / delta);
}

auto show (double v) -> std::string
{
    char s [100];
    if (-0.0005 < v && v < 0.0005)
    {
        return "0.000";
    }
    std::sprintf (s , "%.3f" , v);
    return s;
}

auto main () -> int
{
    double a , b , c , d , e , f;
    while (std::cin >> a >> b >> c >> d >> e >> f)
    {
        auto xy = solve (a , b , c , d , e , f);
        std::cout << show (xy.first) << ' ' << show (xy.second) << std::endl;
    }
}