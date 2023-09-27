#include<stdio.h>
#include<iostream>
using namespace std;
int main(void){
    double a, b, c, d, e, f;
    while(cin >> a >> b >> c >> d >> e >> f){
        double x = (f - ((c*e)/b)) / (d - ((a*e)/b));
        double y = (c/b) - ((a*x)/b);

        if(x == 0){
            x = 0;
        }
        if(y == 0){
            y = 0;
        }
        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}

