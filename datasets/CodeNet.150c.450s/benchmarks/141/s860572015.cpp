#include <iostream>
using namespace std;

int main()
{
        double x1,y1,x2,y2,x3,y3;
        double xp,yp;
        double xv1,yv1,xv2,yv2,xvp,yvp;
        double t,u;

        while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
                xv1 = x2 - x1;
                yv1 = y2 - y1;
                xv2 = x3 - x1;
                yv2 = y3 - y1;
                xvp = xp - x1;
                yvp = yp - y1;

                t = (xvp*yv2-yvp*xv2)/(xv1*yv2-xv2*yv1);
                u = (yvp*xv1-xvp*yv1)/(xv1*yv2-xv2*yv1);

                if(0.0 < t && 0.0 < u && 0.0 < t+u && t+u < 1.0){
                        cout << "YES" << endl;
                }else{
                        cout << "NO" << endl;
                }
        }

        return 0;
}