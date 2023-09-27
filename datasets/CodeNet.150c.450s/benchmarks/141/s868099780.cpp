#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    double x1, y1, x2, y2, x3, y3, xp, yp;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
        x2-=x1;
        x3-=x1;
        xp-=x1;
        y2-=y1;
        y3-=y1;
        yp-=y1;
        double m=(x3*y2-x2*y3);
        double p=(x3*yp-xp*y3)/m;
        double q=(xp*y2-x2*yp)/m;
        cout<<((p>=0&&q>=0&&p+q<=1)?"YES\n":"NO\n");
    }
    return 0;
}