#include <cmath>
#include <iostream>
#include <iomanip>

/*
ax + by = c
dx + ey = f

x = (c-by)/a
d(c-by)/a + ey = f
dc/a - dby/a + ey = f
ey - dby/a = f - dc/a
y(e-db/a) = f - dc/a
y = (f-dc/a)/(e-db/a)

aex + bey = ce
bdx + bey = bf
aex - bdx = ce - bf
x(ae - bd) = ce - bf
x = (ce - bf)/(ae - bd)
by = c - ax
y = (c - ax)/b
*/
int main()
{
    while(true){
        double a, b, c, d, e, f;
        std::cin >> a >> b >> c >> d >> e >> f;
        if(std::cin.eof()) break;
        double x, y;
        if(b == 0) return 0;
        // if(b){
            x = (c*e - b*f) / (a*e - b*d);
            y = (c - a*x) / b;
        // }else{
        //     y = (f-d*c/a)/(e-d*b/a);
        //     x = (c-b*y)/a;
        // }
        if(x == -0) x = 0;
        if(y == -0) y = 0;
        std::cout << std::fixed << std::setprecision(3);
        std::cout << x << " " << y << std::endl;
    }
    return 0;
}