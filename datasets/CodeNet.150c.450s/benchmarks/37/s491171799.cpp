#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
 
using namespace std;
int main(){
    double a,b,c,d,e,f;
    while((cin>>a>>b>>c>>d>>e>>f)){
        double x = (c*e-b*f)/(a*e-b*d);
        double y = (c*d-a*f)/(b*d-a*e);
        x = round(1000*x) / 1000;
        y = round(1000*y) / 1000;
        if(x==0)x=0;
        if(y==0)y=0;
        cout << fixed << setprecision(3) << x << " " << y << endl;
    }
    return 0;
}