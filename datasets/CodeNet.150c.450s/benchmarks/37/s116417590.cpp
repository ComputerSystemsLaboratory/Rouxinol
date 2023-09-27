#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
    double a, b, c, d, e, f;
    double x, y;
    
    while(cin >> a >> b >> c >> d >> e >> f) {
        y = (c*d - a*f) / (b*d - a*e);
        x = (c - b * y) / a;
        
        printf("%.3lf %.3lf", x, y);
        cout << endl;
    }
}
