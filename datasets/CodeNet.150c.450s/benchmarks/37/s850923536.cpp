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

*/
int main()
{
    while(true){
        double a, b, c, d, e, f;
        std::cin >> a >> b >> c >> d >> e >> f;
        if(std::cin.eof()) break;
        double y = (f-d*c/a)/(e-d*b/a);
        double x = (c-b*y)/a;
        std::cout << std::fixed << std::setprecision(3);
        std::cout << x << " " << y << std::endl;
    }
    return 0;
}