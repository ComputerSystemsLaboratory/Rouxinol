#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a1, b1, c1, a2, b2, c2, d, dx, dy;
    while(cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2){
        d = a1*b2 - a2*b1;
        dx = c1*b2 - c2*b1;
        dy = a1*c2 - a2*c1;
        if(d != 0){
            float x = (float)dx/d;
            float y = (float)dy/d;
            if (x == 0.0) x = abs(x);
            if (y == 0.0) y = abs(y);
            cout <<fixed << setprecision(3)<< x <<' '<< y <<endl;
        }
    }
    return 0;
}