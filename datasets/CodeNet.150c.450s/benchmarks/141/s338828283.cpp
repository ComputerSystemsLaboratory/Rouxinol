#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

typedef complex<double> P;
#define X real()
#define Y imag()

#define PI 3.14159265358979

double exterior_product(P p1, P p2, P p3){
        double vx2 = p2.X - p1.X;
        double vy2 = p2.Y - p1.Y;
        double vx3 = p3.X - p1.X;
        double vy3 = p3.Y - p1.Y;
        return vx2*vy3 - vx3*vy2;
}

int main(){
    double x1, x2, x3;
    double y1, y2, y3;
    double xp, yp;

    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
        P a(x1, y1);
        P b(x2, y2);
        P c(x3, y3);
        P p(xp, yp);

        double ex_1 = exterior_product(a, b, p);
        double ex_2 = exterior_product(c, a, p);
        double ex_3 = exterior_product(b, c, p);

        if(ex_1 > 0 && ex_2 > 0 && ex_3 > 0){
            cout << "YES" << endl;
        }
        else if(ex_1 < 0 && ex_2 < 0 && ex_3 < 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}