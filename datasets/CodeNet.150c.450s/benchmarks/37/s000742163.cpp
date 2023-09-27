#include<iostream>
#include <cstdio>
using namespace std;

int main(){
    double a, b, c, d, e, f;
    double x, y;
    while(cin >> a >> b >> c>>d>>e>>f){
        y = (a*f-d*c)/(a*e-b*d);
        x = (c-b*y)/a;
        printf("%.3f %.3f\n", x, y);
    }
}