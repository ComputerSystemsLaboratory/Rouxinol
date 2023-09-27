#include <iostream>
#include <cstdio>
#include <limits>
#define eps 1e-10
using namespace std;

int main(void) {
    double a, b, c, d, e, f;
    //double inf = numeric_limits<double>::infinity();
    while(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF) {
        double ya = d * c - a * f;
        double yb = b * d - a * e;
        if(yb == 0) yb += eps;
        double y = ((ya) / (yb));
        //if(yb == 0) y = inf;
        if(a == 0) a += eps;
        double x = ((c - b * y) / a);
        //if(a == 0) x = inf;
        printf("%.3f %.3f\n",x, y);
    }
    
    return(0);
}