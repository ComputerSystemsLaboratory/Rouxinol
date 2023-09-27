#include<iostream>
using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, xp, yp;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp)
    {
        double s = ((y3-y1)*(xp-x1)+(x1-x3)*(yp-y1))/((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
        double t = ((y1-y2)*(xp-x1)+(x2-x1)*(yp-y1))/((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
        if( s>=0 && t>=0 && s+t<=1 ){cout << "YES\n";}
        else{cout << "NO\n"; }
    }

    return 0;
}