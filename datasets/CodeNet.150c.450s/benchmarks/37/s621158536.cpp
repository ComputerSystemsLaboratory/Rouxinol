#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double a, b, c, d, e, f;
    while (cin >> a >> b >> c >> d >> e >> f){
        double x = (e*c - b*f) / (e*a - d*b);
        double y = (a*f - d*c) / (e*a - d*b);

        int x2 = x > 0 ? (x * 1000 + 0.5) : (x * 1000 - 0.5);
        int y2 = y > 0 ? (y * 1000 + 0.5) : (y * 1000 - 0.5);

        cout << fixed << setprecision(3) << x2 / 1000.0 << " " << y2 / 1000.0 << endl;
    }

    return 0;
}