#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    while(cin >> a >> b >> c >> d >> e >> f) {
        int det = a*e - d*b;
        double x = floor(((double)(c*e - b*f) / det) * 1000 + 0.5) / 1000;
        double y = floor(((double)(a*f - c*d) / det) * 1000 + 0.5) / 1000;
        printf("%.3lf %.3lf\n", x, y);
        
    }
}