#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
     
    double x, y;
    double a, b, p;
    double c, d, q;
 
    while (cin >> a >> b >> p >> c >> d >> q){
 
        x = (double)((p * d - b * q) / (a * d - b * c));
        y = (double)((a * q - p * c) / (a * d - b * c));
        if (x == 0)x = 0;
        if (y == 0)y = 0;
        printf("%.3f %.3f\n", x, y);
    }
}