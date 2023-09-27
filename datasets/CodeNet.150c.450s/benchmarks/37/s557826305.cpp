#include <iostream>
#include <cstdio>

int main()
{
    double a, b, c;
    double d, e, f;
    double x, y;
    double D;  // 判別式
    
    while (std::cin >> a >> b >> c >> d >> e >> f){
        D = a * e - b * d;
        
        x = ( e * c - b * f) / D;
        y = (-d * c + a * f) / D;
        
        if (x == 0){
            x = 0;
        }
        else if (y == 0){
            y = 0;
        }
        
        std::printf("%.3lf %.3lf\n", x, y);
    }
    
    return 0;
}