#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, xp, yp;
    double ax, ay, bx, by;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
        double m,n;
        ax = x2 - x1;
        ay = y2 - y1;
        bx = x3 - x1;
        by = y3 - y1;
        xp = xp - x1;
        yp = yp - y1;
        double point = ax*by - ay*bx;
        m = (by*xp - bx*yp)/point;
        n = (-ay*xp + ax*yp)/point;
        if(point == 0){
            cout << "NO"<<endl;
        }
        else if(m > 0 && m <= 1 && n > 0 && n <= 1 && m+n <= 1 ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}