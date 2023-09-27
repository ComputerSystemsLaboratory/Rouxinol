#include <iostream>

using namespace std;

int main()
{
    double x1,y1,x2,y2,x3,y3,xp,yp;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &xp, &yp) == 8) {
        double pax = x1 - xp, pay = y1 - yp, pbx = x2 - xp, pby = y2 - yp, pcx = x3 - xp, pcy = y3 - yp;
        double n1 = pax * pby - pay * pbx, n2 = pbx * pcy - pby * pcx, n3 = pcx * pay - pcy * pax;
        if((n1 <= 0.0 && n2 <= 0.0 && n3 <= 0.0) || (n1 > 0.0 && n2 > 0.0 && n3 > 0.0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}