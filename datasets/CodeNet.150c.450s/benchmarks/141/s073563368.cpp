#include <iostream>
using namespace std;
#include <math.h>
 
int main()
{
    double x1, y1, x2, y2, x3, y3, x, y;
    double ax, ay, bx, by;
    double z1, z2, z3; // ????????????A??¨????????????B????????????z??????
     
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x >> y) {
        ax = x2 - x1;
        ay = y2 - y1;
        bx = x - x1;
        by = y - y1;
        z1 = ax * by - ay * bx;
         
        ax = x3 - x2;
        ay = y3 - y2;
        bx = x - x2;
        by = y - y2;
        z2 = ax * by - ay * bx;
         
        ax = x1 - x3;
        ay = y1 - y3;
        bx = x - x3;
        by = y - y3;
        z3 = ax * by - ay * bx;
         
        if ( ( (z1 > 0) && (z2 > 0) && (z3 > 0) ) || ( (z1 < 0) && (z2 < 0) && (z3 < 0) ) )
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}