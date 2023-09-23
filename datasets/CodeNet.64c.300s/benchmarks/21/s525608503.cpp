#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c,d,e,f,x,y;
    while(cin >> a >> b >> c >> d >> e >> f){
        double detA;
        detA = a * e - b * d;
        x = (c * e - f * b) / detA;
        y = (a * f - c * d) / detA;
        cout << fixed << setprecision(3) << x + 0.0001 << " " << setprecision(3) << y + 0.0001 << '\n';
    }
}