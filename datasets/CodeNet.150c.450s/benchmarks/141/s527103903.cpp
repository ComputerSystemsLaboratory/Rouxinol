#include <iostream>
#include <cmath>

using namespace std;

#define EPS 1e-5

double heron(double a,double b,double c){
      double s = (a + b + c) / 2;

      return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double x[3],y[3],xp,yp,a,b,c,d,e,f,sq,sqd,sqe,sqf;
    
    while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp){
        a = sqrt(pow((x[1] - x[0]),2) + pow((y[1] - y[0]),2));
        c = sqrt(pow((x[2] - x[0]),2) + pow((y[2] - y[0]),2));
        b = sqrt(pow((x[2] - x[1]),2) + pow((y[2] - y[1]),2));

        sq = heron (a,b,c);

        d = sqrt(pow((xp - x[0]),2) + pow((yp - y[0]),2));
        e = sqrt(pow((xp - x[1]),2) + pow((yp - y[1]),2));
        f = sqrt(pow((xp - x[2]),2) + pow((yp - y[2]),2));

        sqd = heron(d,e,a);
        sqe = heron(e,b,f);
        sqf = heron(f,c,d);
        /*
        if(sqd == 0 || sqe == 0 || sqf == 0){
             cout << "NO" << endl;
             return 0;
         }
        */
         if(abs(sq - (sqd + sqe + sqf)) < EPS){
            cout << "YES" << endl;
            
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}