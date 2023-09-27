#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double a, b, c, d, e, f;
    double x, y;
    while(cin >> a >> b >> c >> d >> e >> f){
        double g = b*d - a*e;
        printf("%.3lf %.3lf\n", ((long long)((1000*(b*f-c*e)/g)))/1000.0, ((long long)((1000*(d*c-a*f)/g)))/1000.0);
    }
    return 0;
}