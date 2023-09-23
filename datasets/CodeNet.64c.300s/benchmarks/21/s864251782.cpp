#include<iostream>
#include<iomanip>
using namespace std;
int main(void) {
    double a, b, c, d, e, f;
    while(cin >> a >> b >> c >> d >> e >> f){
        double x = (f - (c*e/b)) / (d - ((a*e)/b));
        if(x == 0){
            x = 0;
        }
        double y = (c/b) - (a/b) * x;

        cout << fixed;
        cout << setprecision(3) << x << ' ' << y << endl;
    }
}