#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

using namespace std;

int main(int argc, char const* argv[])
{
    double a,b,c,d,e,f,x,y;
    while (scanf("%lf %lf %lf %lf %lf %lf ", &a, &b, &c, &d, &e, &f) != EOF) {
        y = (a*f - d*c) / (a*e - b*d);
        x = (c - b*y) / a;
        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}