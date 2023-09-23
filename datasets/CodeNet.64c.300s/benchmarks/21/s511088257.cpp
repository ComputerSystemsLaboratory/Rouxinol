#include <iostream>
#include <utility>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.setf(ios::fixed);
    cout.precision(3);
    double a1, b1, c1, a2, b2, c2;
    while(cin>>a1>>b1>>c1>>a2>>b2>>c2){
        double m = a1*b2-a2*b1;
        double x=(c1*b2-c2*b1)/m, y=(a1*c2-a2*c1)/m;
        if(fabs(x)<1e-9) x=0;
        if(fabs(y)<1e-9) y=0;
        cout<<x<<' '<<y<<'\n';
    }
    return 0;
}