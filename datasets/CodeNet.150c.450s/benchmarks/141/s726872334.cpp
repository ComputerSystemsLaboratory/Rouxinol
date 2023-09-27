#include <iostream>
using namespace std;

double equ(double x1, double y1, double x2, double y2, double x, double y){
    return (x1-x2)*(y-y1) - (y1-y2)*(x-x1);
}

bool same_side(double x1, double y1, double x2, double y2,
               double xa, double ya, double xb, double yb){
    return equ(x1, y1, x2, y2, xa, ya) * equ(x1, y1, x2, y2, xb, yb) > 0;
}

int main(){
    double x1, y1, x2, y2, x3, y3, xp, yp;
    while( cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp ){
        double xg = (x1+x2+x3)/3, yg = (y1+y2+y3)/3;
        if( same_side(x1, y1, x2, y2, xg, yg, xp, yp) &&
            same_side(x2, y2, x3, y3, xg, yg, xp, yp) &&
            same_side(x3, y3, x1, y1, xg, yg, xp, yp) ){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}