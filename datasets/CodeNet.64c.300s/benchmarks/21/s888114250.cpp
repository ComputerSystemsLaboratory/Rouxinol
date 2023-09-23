#include <iostream>
#include <cstdio>
using namespace std;


int main(void) {
    double a, b, c, d, e, f;
    double x, y;
    
    while(cin >> a >> b >> c >> d >> e >> f) {
        x = (c*e - b*f) / (a*e - b*d);
        y = (c*d - a*f) / (b*d - a*e);
        
        if(x == 0) x = 0;
        if(y == 0) y = 0;
        printf("%.3lf %.3lf", x, y);
        cout << endl;
    }
}
