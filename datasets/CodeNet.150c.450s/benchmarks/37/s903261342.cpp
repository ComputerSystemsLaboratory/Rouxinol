#include <iostream>
#include <cstdio>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int a,b,c,d,e,f;
    double x,y;
    while (std::cin >> a >> b >> c >> d >> e >> f) {
        int delta = (a * e) - (b * d);
        x = (e * c + -b * f) / (double) delta + 0;
        y = (-d * c + a * f) / (double) delta + 0;
        std::printf("%.3f %.3f\n", x, y);
    }
}

