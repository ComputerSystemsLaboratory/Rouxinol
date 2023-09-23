#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a,b,c,d,e,f;
    double x,y;
    while(cin >> a >> b >> c >> d >> e >> f){
        x = (double)((c*e - b*f)/(a*e - b*d) * 1000) / 1000.0;
        y = (double)((d*c - a*f)/(b*d - a*e) * 1000) / 1000.0;
        x = (x == -0.0) ? 0.000 : x;
        y = (y == -0.0) ? 0.000 : y;
        cout << fixed << setprecision(3);
        cout << x << " " << y << endl;
    }
    return 0;
}
