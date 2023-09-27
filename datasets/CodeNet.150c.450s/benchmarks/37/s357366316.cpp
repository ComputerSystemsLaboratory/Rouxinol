#include <iostream>

int main(int argc, const char * argv[]) {
    double a,b,c,d,e,f;
    double x,y;
    while(std::cin >> a >> b >> c >> d >> e >> f){
        y = (a*f - c *d) / (a*e  - d*b);
        x = (c-b * y) / a;
        printf("%.3f %.3f\n",x,y);
    }
   
}